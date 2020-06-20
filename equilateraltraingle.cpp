#include <iostream>

int main()
{
	int height;

	std::cout << "Please enter the height of equilateral triangle ";
	std::cin >> height;

	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j < (height - i); j++)
		{
			std::cout << " ";
		}

		for(int j = 0; j < ((2*i)+1); j++)
		{
			std::cout << "*";
		}

		for(int j = 0; j < (height - i); j++)
		{
			std::cout << " ";
		}

        std::cout << std::endl;
	}
}
