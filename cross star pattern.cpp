#include <iostream>
using namespace std;
int main (void)
{
    float n;
    cout<<"please enter the now of rows of stars \n";
    cin>>n;
	for(int i=1; i<=n; i++)
	{
	    if(i<=(n/2))
	    {
	    	for(int j=1; j<i; j++)
	    		cout<<" ";
	    	cout<<"*";
	    	for(int k=n/2-1; k>=i-1; k=k-1)
	    		cout<<" ";
	    	for(int m=n/2; m>i; m--)
	    		cout<<" ";
			cout<<"*";
	    	cout<<endl;
	    }

	}
}
