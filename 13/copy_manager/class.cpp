#include"class.h"

Resource::Resource(int di, string ds, Owner* p):
	data_int(di), data_str(ds), pOwner(p)
{
	pOwner->resources.insert(this);
}

Resource::Resource(const Resource& re2)
{
	pOwner->resources.erase(this);
	data_int = re2.data_int;
	data_str = re2.data_str;
	pOwner = re2.pOwner;
}

Resource& Resource::operator=(
		const Resource& re2)
{
	pOwner->resources.erase(this);
	data_int = re2.data_int;
	data_str = re2.data_str;
	pOwner = re2.pOwner;

	return *this;
}

Resource::~Resource()
{
	pOwner->resources.erase(this);
}

void Owner::display_all()
{
	cout << owner_data << endl;
	for(const auto& pt: resources)
	{
		cout << pt->dataInt() << " "
			<< pt->dataStr() << endl;
	}
}

