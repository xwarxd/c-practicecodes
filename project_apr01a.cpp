#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std ;
int dir;
int x=10,y=10,fruitx,fruity;
int hieght = 20,width =20;

char ch[20] = "game over";
void input()

    {
    switch(getch())
        {
        case 'a' :
            {
            x--;
                break;
        }
         case 's' :
            {
            y--;
                break;
        }
         case 'd' :
            {
            x++;
                break;
        }
         case 'w' :
            {
            y++;
                break;
        }
    }

}
void show()
{int i,j,t;
for(j=20;j>=1;j--)
{
for(i=1;i<=width;i++)
    {
        if(j==1||j==hieght)
        {
            cout<<"*";
        }
            else
        {if(i==1||i==width-1)
                cout<<"*";
          else
                if(i==x&&j==y)
                {
                cout<<"o";
                i++;}
                cout<<" ";
        }

    }
        cout<<endl;
}

}
int main ()
{
while(!strcmp(ch,"game over"))
    {
    show();
    input();
    system("cls");
}

return 0;
}
