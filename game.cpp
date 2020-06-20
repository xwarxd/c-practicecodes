#include <iostream>
using namespace std;

class player
{
public:
    string name;
    int att, def, hp;
    void playerinfo(int a, int b)
    {
        hp=100;
        att=a;
        def=b;
        cout<<"Please enter your name \n";
        cin>>name;
    }
    void defense()
    {
        hp=hp-(att-def);
        if(hp>100)
        hp=100;
        else if(hp<0)
        hp=0;
    }
    void info()
    {
        cout<<name<<" has "<<hp<<" left. \n";
    }
    void check()
    {
        if(hp<0)
        cout<<"Game over "<<name<<" wins. \n";
    }

};

int main()
{
    int i;
    player ply[2];
    for(;;)
    {
        for(i=0; i<2; i++)
        {
            int a, d;
            cout<<"enter the value of attack and defense \n";
            cin>>a>>d;
            ply[0].playerinfo(a,d);
            ply[1].playerinfo(a,d);
            ply[i].defense() ;
            ply[0].info();
            ply[1].info();
            ply[0].check();
            ply[1].check();

        }
    }
}
