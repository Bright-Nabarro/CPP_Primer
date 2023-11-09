#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class HasPtr
{
private:
    string* p_id;
    string* p_name;
    size_t* use;
public:
    HasPtr(const string& id, const string& name):
        p_id(new string(id)), p_name(new string(name)),
        use(new size_t(1)){}

    HasPtr(const HasPtr& hp)
    {
        use = hp.use;
        ++*use;
        p_id = hp.p_id;
        p_name = hp.p_name;
    }
    ~HasPtr()
    {
        if (--*use == 0)
        {
            delete p_name;
            delete p_id;
            delete use;
        }
    }
    HasPtr& operator=(const HasPtr& hp)
    {
        if(this == &hp)
            return *this;
        ++*hp.use;
        if (--*use == 0)
        {
            delete p_name;
            delete p_id;
            delete use;
        }
        p_name = hp.p_name;
        p_id = hp.p_id;
        use = hp.use;
        return *this;
    }

    string msg()
    {
        ostringstream ossm;
        ossm << *p_id << " " << *p_name;
        return ossm.str();
    }
};

int main()
{
    HasPtr h1("1", "lin17");
    auto h2 = h1;
    auto h3(h1);
    cout << h3.msg() << endl;
}
