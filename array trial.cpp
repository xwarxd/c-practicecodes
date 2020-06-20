/* This is a c++ program to print first n prime numbers */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)

{
    int p, i, k=1;
    cout<<"Please enter how many primes are to be calculated \n";
    cin>>p;
    system("cls");



    cout<<"2 ";
    for(i=3; k<p; i++)
    	{
    	for(int j=2; j<i; j++)
            {
                if(i%j==0)
                break;
                if(i-j==1)
                {
                	cout<<i<<" ";
                	k=k+1;
                }
            }
    	}





}
