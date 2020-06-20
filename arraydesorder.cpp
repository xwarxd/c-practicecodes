#include <iostream>
using namespace std;
int main (void)
{
	int n;
	cout<<"Please enter the number of rows to be printed \n";
	cin>>n;
	int arr[n,n]
	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(j=0||j=i-1)
				arr[i][j]=1;
			else
				arr[i][j]=op[i-1][j-1]+op[i-1][j]

                if(i==(n+1) | j==(n-1))
                    cout<<arr[i][j];
                else
                    cout<<"  ";

		}
	}

}
