#include<iostream>
#include<string>
#include<vector>
#include<memory>

class BASE
{
private:
	std::string base_name;
public:
	BASE(const std::string& name = std::string())
		: base_name(name){}
	std::string name(){ return base_name;}
	virtual void print(){ std::cout << base_name << std::endl; }
};

class DERIVED: public BASE
{
private:
	int age;
public:
	DERIVED(const std::string& name, int age):
		BASE(name), age(age){}
	virtual void print() override
	{
		std::cout << name() << " "<< age << std::endl;
	}
};

int main()
{
	std::vector<std::unique_ptr<BASE>> vb;
	vb.push_back(std::make_unique<BASE>("abc"));
	vb.push_back(std::make_unique<DERIVED>("ddd",32));
	vb.push_back(std::make_unique<BASE>("123"));
	vb.push_back(std::make_unique<BASE>("lin17"));
	for(const auto& x: vb)
		x->print();
}
