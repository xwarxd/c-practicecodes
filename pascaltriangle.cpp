#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Please enter the row and column of element\n";
    cin>>n;

    int arr[n][n];

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++)
        cout << " ";

        for(j=0; j < i; j++)
        {
            if(j==0 || j==i-1)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
                    cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
