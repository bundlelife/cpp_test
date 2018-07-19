#include <typeinfo>		// for typeid
#include <functional>	// for std::cref()
#include <string>
#include <iostream>

void printString(std::string const& s)
{
  std::cout << s << '\n';
}

template <typename T>
void printT (T arg)
{
  printString(arg);         // might convert arg back to std::string
}

template <typename T>
T const& max (T const& a, T const & b)
{
	return a > b ? a : b;
}

template <typename T, typename U>
auto max (T a, U b)
{
	return a > b ? a : b;
}

template <typename T>
T max (T )
{
	std::vector<>
}

int main()
{
  std::string s = "hello";
  auto value = ::max(3, 8);
  std::cout <<  "value:" << value << " type:" << typeid(value).name() << std::endl;

  printT(s);               // print s passed by value
  printT(std::cref(s));    // print s passed “as if by reference”
}







