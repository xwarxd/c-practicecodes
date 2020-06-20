#include <iostream>
using namespace std;
int main()
{
	int i, j, n,sum2=0;
    cout<<"Please enter number of element.\n";
    cin>>n;
    for(j=1; j<=n; j++)
    {
        int sum=0;
        for(i=1; i<=j; i++)
            sum=i+sum;
        sum2=sum2+sum;
    }
    cout<<sum2;
    return 0;

}

