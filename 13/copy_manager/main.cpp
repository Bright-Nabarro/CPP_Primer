#include "class.h"

int main()
{
	Owner o1("lin17");
	auto const p = &o1;
	Resource r1(1, "bk", p), r2(2, "sttela", p);
	o1.display_all();
}
