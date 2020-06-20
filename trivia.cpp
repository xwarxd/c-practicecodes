

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int od(int x)
{
    x=x+1;
    cout<<x;
}

int factorial(int x)
{
	for(int j=x-1; j>0; j--)
		x=j*x;
    if(x==0)
        x=1;
	return x;
}

int main()
{
    int n;
    cin>>n;
	cout<<factorial(n);


}
