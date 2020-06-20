#include <iostream>

int main()
{
	int elecunits;
	float totalcharge;

	std::cout <<  "Please enter the electricity units in consumption \n";
	std::cin >> elecunits;

	totalcharge = elecunits * 0.5;

	if(elecunits>50)

	totalcharge = totalcharge + (elecunits-50) * 0.25;		//(0.75 - 0.5)

	if(elecunits>150)

	totalcharge = totalcharge + (elecunits-150) * 0.45;		//(1.20 - 0.75)

	if(elecunits>250)

	totalcharge = totalcharge + (elecunits-250) * 0.30;		//(1.50 - 1.20)

	totalcharge = totalcharge + totalcharge * 0.2;

	std::cout << "Total charge of electricity consumption is " << totalcharge << " Rs. \n";

	return 0;
}
