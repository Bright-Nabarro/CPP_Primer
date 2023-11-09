#include"TextQuery.h"
#include<fstream>
using namespace std;

int main()
{
	ifstream inFile("D:\\cpptest\\f2\\primer\\15\\text\\1.txt");
	TextQuery tq(inFile);
	auto result = tq.query("a");
	result.print(cout);
}
