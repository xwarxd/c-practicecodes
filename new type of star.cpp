#include <iostream>
using namespace std;
int main (void)
{
    float n;
    cout<<"please enter the number of rows of stars \n";
    cin>>n;
    int m=n+1;
	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<m; j++)
		{
			if(j==i | j==m-i)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;



	}
}
