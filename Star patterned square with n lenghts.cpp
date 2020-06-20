#include <iostream>
using namespace std;

int main()
{
    int x;

    cin >> x;

    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= 2*(x+1); j++)
        {
            if(i==j||i+j==x+1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}
