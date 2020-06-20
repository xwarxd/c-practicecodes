#include <iostream>
using namespace std;
int main()
{
	int num, a=10, b=1, sum=0;
	cin>>num;

	while(num>=b)
        {
            sum=sum+((num%a)/b);
            a=a*10;
            b=a/10;
        }
	cout<<sum;
    return 0;
}
