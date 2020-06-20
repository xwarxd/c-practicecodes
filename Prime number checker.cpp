/* This is a c++ program to check if a number is prime or not*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)

{
    long long unsigned int p, j;
    bool prime=false;
    cout<<"Please enter the number to be checked for if it is a prime or not\n";
    cin>>p;
    system("cls");


    for(j=2; j<p; j++)
        {
            if(p%j==0)
                break;

            if(p-j==1)
            prime=true;
        }

    if(prime==true || p==2)
        cout<<p<<" is a prime";
    else
        cout<<p<<" is not a prime and is divisble by "<<j;


}
