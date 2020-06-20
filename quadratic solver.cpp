#include <iostream>
#include <cmath>

int main()
{
	double a, b, c, x1, x2;

	std::cout << "Please enter the values of a, b and c in expression ax^2 + bx + c = 0 \n";
	std::cin >> a >> b >> c;

	x1 = ((-1*b) + sqrt((b*b) - (4*a*c)))/(2*a);

	x2 = ((-1*b) - sqrt((b*b) - (4*a*c)))/(2*a);

	std::cout << "The roots of the given quadratic equation are " << x1 << " and " << x2;

	return 0;




}
