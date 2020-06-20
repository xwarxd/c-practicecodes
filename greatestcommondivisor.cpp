#include <iostream>
using namespace std;
int main()
{
	int a, b, n;
	cout<<"Please enter any two numbers for which we have to find greatest common divisor. \n";
	cin>>a>>b;
	if(a>b)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	for(int i=1; i<=a; i++)
	{
		if(a%i==0&&b%i==0)
			n=i;
	}
	cout<<"The greatest common divisor is "<<n;
    return 0;
}
