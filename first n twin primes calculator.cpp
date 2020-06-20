/* This is a c++ program to print first n pairs of twin prime numbers */

#include <iostream>
#include <stdlib.h>


int main(void)

{
    long int p, i, k=1;
    std::cout << "Please enter how many twin prime pairs are to calculated \n";
    std::cin >> p;

    system("cls");

    cout << "3 5 ";

    for(i = 5; k < p; i++)
        {
        for(long int j = 2; j < i; j++)
            {
                if((i%j==0)|((i+2)%j==0))
                    break;

                if(i-j==1)
                {
                    std::cout << i << " ";
                    std::cout << i+2 << "  ";
                    k++;
                }
            }
        }





}
