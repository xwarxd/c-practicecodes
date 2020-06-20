#include <iostream>
using namespace std;
int main (void)
{
    int n;
    cout<<"Please enter the number of rows for which the star pattern is to be printed \n";
    cin>>n;

	for(int i=0; i<n; i++)
	{
	    if(i<n-1)
        {
            for(int j=1; j<2*n; j++)
            {
                if(j==(n+i) | j==(n-i))
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
        else
            for(i=1; i<=n; i++)
                cout<<"* ";

	}




}

