#include <iostream>
using namespace std;
int main()
{
	int num, dig, a=1, digit;
	string inwords;
    cout<<"Please enter any number \n";
    cin>>num;

    for(dig=0;num>a;a=a*10)
        dig=dig+1;

    if(num==1)
        cout<<"one";
    else
    {
        for(int i=0; i<dig; i++)
        {
            digit=((num%a)/(a/10));
            switch(digit)
            {
                 {
                    case 1:
                    inwords="one";
                    break;
                }
                {
                    case 2:
                    inwords="two";
                    break;
                }
                {
                    case 3:
                    inwords="three";
                    break;
                }
                {
                    case 4:
                    inwords="four";
                    break;
                }
                {
                    case 5:
                    inwords="five";
                    break;
                }
                {
                    case 6:
                    inwords="six";
                    break;
                }
                {
                    case 7:
                    inwords="seven";
                    break;
                }
                {
                    case 8:
                    inwords="eight";
                    break;
                }
                {
                    case 9:
                    inwords="nine";
                    break;
                }
                {
                    case 0:
                    inwords="zero";
                    break;
                }
            }
            cout<<inwords<<" ";
            a=a/10;
        }
    }



}

