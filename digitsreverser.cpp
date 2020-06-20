#include <iostream>
using namespace std;
int main (void)
{
	int num, dig=1, a=10, b=10, p=0, r, i=1;

	cout<<"Please enter any number \n";
	cin>>num;

    for(;num>=a;a=a*10)
		dig=dig+1;

    int res[dig];

    for(i=1; i<=dig; i++)
    {
        a=a/10;
        p=num%b;
        res[i-1]=(p/i);
        res[i-1]=res[i-1]*a;
        b=b*10;

    }

    for(i=1; i<=dig; i++)
        {
            p=p+res[i-1];
        }
    cout<<p;


}


