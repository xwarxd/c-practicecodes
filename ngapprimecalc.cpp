#include <iostream>

int sqrt(int x)
{
	for(int i = 1;; i++)
	{
		if(i*i>=x)
			return i;
	}
}

int primecheck(int x)
{
	if(x==2)
	return x;

	for(int i = 2; i <= sqrt(x); i++)
	{
		if(x%i==0)
		return 0;
	}

	return x;
}

int oddeven(int x)
{
    if(x%2!=0)
        return 1;
    return 0;
}

int main()
{
    int i = 1;
	int x = 0, y = 0;
	int n;
	std::cout << "Enter the the difference 'n' for which the first primes are to be calculated \n";
	std::cin >> n;


	while(y==0)
	{
	    i++;
		x = primecheck(i);


		if(x!=0)
		{

			y = primecheck(x+n);
			if(y!=0)
			{
				std::cout << x << std::endl <<y;
				std::cin >> n;
				return 0;
			}

			if(oddeven(n)==1)
            break;
		}
	}

	std::cout << "There exists no such difference \n";

	return 0;


}
