#include <iostream>

class SmallInt {
  friend SmallInt operator+(const SmallInt&, const SmallInt&);
public:
  SmallInt(int = 0) { } // conversion from int
  operator int() const { return val; } // conversion to int
private:
  std::size_t val;
};

SmallInt operator+(const SmallInt&, const SmallInt&) {
  std::cout << "operator+(const SmallInt&, const SmallInt&)" << std::endl;
  return SmallInt();
}

int main(void)
{
	SmallInt si;
	double d = si + 2.3;
}
