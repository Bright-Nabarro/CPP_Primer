#include <string>
#include <iostream>

class Token
{
public:
	Token(): tok(INT), ival{0}{};
	Token(const Token& t):tok(t.tok){copyUnion(t);}
	Token& operator=(const Token&);
	Token(Token&& t);
	Token& operator=(Token&&);
	~Token(){ if (tok == STR) sval.~basic_string();}

	Token& operator=(const std::string&);
	Token& operator=(int);
	Token& operator=(char);
	Token& operator=(double);
private:
	enum{INT, CHAR, DBL, STR} tok;
	union
	{
		int 	ival;
		char	cval;
		double	dval;
		std::string sval;
	};
	void copyUnion(const Token&);
};

void Token::copyUnion(const Token& t)
{
	switch(t.tok)
	{
	case INT:
		ival = t.ival;
		break;
	case CHAR:
		cval = t.cval;
		break;
	case DBL:
		dval = t.dval;
		break;
	case STR:
		new(&sval) std::string(t.sval);
		break;
	}
}

Token& Token::operator=(const Token& t)
{
	using std::string;
	if(tok == STR && t.tok != STR) sval.~string();
	if(tok == STR && t.tok == STR)
		sval = t.sval;
	else
		copyUnion(t);

	return *this;
}

Token::Token(Token&& t)
{
	if(t.tok == STR)
		sval = std::move(t.sval);
	else
		dval = t.dval;	//double为最大元素, 确保覆盖
	tok = t.tok;
}

Token& Token::operator=(Token&& t)
{
	using std::string;
	if(tok == STR && t.tok != STR) sval.~string();
	if(tok == STR && t.tok == STR)
		sval = std::move(t.sval);
	else
		dval = t.dval;	//double为最大元素, 确保覆盖
	return *this;
}

Token& Token::operator=(const std::string& s)
{
	if(tok == STR)
		sval = s;
	else
		new(&sval) std::string(s);
	//sval和其他的起始地址相同

	tok = STR;
	return *this;
}

Token& Token::operator=(int i)
{
	using std::string;
	if(tok == STR) sval.~string();
	ival = i;
	tok = INT;
	return *this;
}

Token& Token::operator=(char c)
{
	using std::string;
	if(tok == STR) sval.~string();
	cval = c;
	tok = CHAR;
	return *this;
}

Token& Token::operator=(double d)
{
	using std::string;
	if(tok == STR) sval.~string();
	dval = d;
	tok = DBL;
	return *this;
}

int main()
{
	Token t1;
	t1 = std::string("abc");
}
