#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int factorial(int x)
{
	for(int y=x-1; y>0; y--)
		x=x*y;
	return x;
}

int npr(int n, int r)
{
    return (factorial(n)/factorial(n-r));
}

int ncr(int n, int r)
{
    return npr(n,r)/factorial(r);
}

int main()
{
	int i, n, r;
	for(;;)
	{
	    system("cls");
	    cout<<"enter 1 for permutations or 2 for combinations \n";
	    cin>>i;
	    system("cls");
	    switch(i)
	    {
	    	case 1:
	    	cout<<"enter the value of n and r \n";
	    	cin>>n>>r;
	    	cout<<"Number of permutations is ";
	    	cout<<npr(n,r)<<endl;
            getch();
	    	break;

	    	case 2:
	    	cout<<"enter the value of n and r \n";
	    	cin>>n>>r;
	    	cout<<"Number of combinations is ";
	    	cout<<ncr(n,r)<<endl;
            getch();
	    	break;

	    	default:
	    	{
	    		return 0;
	    	}
	    }
	}
    return 0;
}
