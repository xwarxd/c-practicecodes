#include <iostream>
#include <string>
#include <sstream>

std::string inttostring(int x)
{
	std::ostringstream temp;
	temp << x;
	return temp.str();
}

int main()
{
	std::string name;
	name = inttostring(77);
	std::cout << name;
}
