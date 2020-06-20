#include <iostream>
using namespace std;

double pow(double x,double y)
{
    double a=x;
    for(int n=1; n<y; n++)
        x=x*a;

    return x;
}

int main (void)
{
    double p, q;
    cout<<"Enter the value of p and q \n";
    cin>>p>>q;

    double a=pow(p,q);
    cout<<p<<"^"<<q<<" = "<<a;

}
