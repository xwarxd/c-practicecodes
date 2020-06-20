#include <iostream>
using namespace std;

int main()
{
    char arr[10];

    cin >> arr;
    arr[4] = 'k';
    arr[5] = '\0';
    cout << arr;
}
