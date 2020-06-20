#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

using namespace std ;

int x=10,y=10,rc,f=0,m=10,n=10,d=1,w=1,a=1,s=1;
int fruitx= ((rand()%18)+1);
int fruity= ((rand()%18)+1);
char dir='w';
char ch[20] = "game over";
char ar[20][20];
void checkendir();
void checkrc();
void logic()

    {if(_kbhit())

    {switch(getch())
        {
        case 'a' :
            {
            dir='a';
                break;
        }
         case 'w' :
            {
            dir='w';
                break;
        }
         case 'd' :
            {
            dir='d';
                break;
        }
         case 's' :
            {
            dir='s';
                break;
        }
    }
        }

    switch(dir)
        {
        case 'a' :
            {
            y--;
                break;
        }
         case 'w' :
            {
            x--;
                break;
        }
         case 'd' :
            {
            y++;
                break;
        }
         case 's' :
            {
            x++;
                break;
        }
    }

}
void initia()
{int i,j;
    for(i=0;i<20;i++)
    {
    for(j=0;j<20;j++)
        {
        if(i==0||i==19)
            ar[i][j]='*';
        else
            {
         if(j==0||j==19)
            ar[i][j]='*';
            else
            ar[i][j]=' ';
}
    }
}
    ar[x][y]='o';


}
void show()
{int i,j;
    ar[fruitx][fruity]='f';
    for(i=0;i<20;i++)
    {
    for(j=0;j<20;j++)
        {
  cout<<ar[i][j];
}
        cout<<endl;
    }
}


void change()
{
    int l;
if(dir=='w')
{a=1;s=1;d=1;
        checkrc();

        if(rc==f)
   {if(fruitx==x&&fruity==y)
       { f++;
          fruitx= ((rand()%18)+1);
          fruity= ((rand()%18)+1);
                }
    for(l=0;l<=f;l++)
            {
            ar[x+l][y]='o';
            ar[x+l+1][y]=' ';
            m=x+l;
        }
            }
           else{
             ar[x][y]=ar[x+1][y];
    ar[x+w][y]='o';
            w++;
            if(w>=f)
            w=1;
            checkendir();
            }
}

if(dir=='s')
{
    w=1;a=1;d=1;
        checkrc();
        if(rc==f)
   {if(fruitx==x&&fruity==y)
       { f++;
          fruitx= ((rand()%18)+1);
           fruity= ((rand()%18)+1);
                }
    for(l=0;l<=f;l++)
            {
            ar[x-l][y]='o';
            ar[x-l-1][y]=' ';
            m=x-l;
        }
            }
           else{
             ar[x][y]=ar[x-1][y];
    ar[x-s][y]='o';
            s++;
            if(s>=f)
            s=1;
            checkendir();
            }

}
    if(dir=='a')
{
   w=1;s=1;d=1;
        checkrc();
        if(rc==f)
   {if(fruitx==x&&fruity==y)
       { f++;
          fruitx=((rand()%18)+1);
                fruity=((rand()%18)+1);
                }
    for(l=0;l<=f;l++)
            {
            ar[x][y+l]='o';
            ar[x][y+l+1]=' ';
            n=y+l;
        }
            }
           else{
             ar[x][y]=ar[x][y+1];
    ar[x][y+a]='o';
            a++;
            if(a>=f)
            a=1;
            checkendir();
            }

}
    if(dir=='d')
{
    w=1;a=1;s=1;
        checkrc();
        if(rc==f)
   {if(fruitx==x&&fruity==y)
       { f++;
          fruitx= (rand()%18)+1;
                fruity=(rand()%18)+1;
                }
    for(l=0;l<=f;l++)
            {
            ar[x][y-l]='o';
            ar[x][y-l-1]=' ';
            n=y-l;
        }
            }
           else{
             ar[x][y]=ar[x][y-1];
    ar[x][y-d]='o';
            d++;
            if(d>=f)
            d=1;
            checkendir();
            }

}
}
void checkrc()
{
    if(dir=='w')
        {
        for(rc=1;rc<f+2;rc++)
        {
        if(!ar[x+rc][y]=='o')
            break;
    }
        rc=rc-2;

    }
        if(dir=='s')
        {
        for(rc=1;rc<f+2;rc++)
        {
        if(!ar[x-rc][y]=='o')
            break;
    }
        rc=rc-2;
    }
        if(dir=='a')
        {
        for(rc=1;rc<f+2;rc++)
        {
        if(!ar[x][y+rc]=='o')
            break;
    }
        rc=rc-2;
    }
        if(dir=='d')
        {
       for(rc=1;rc<f+2;rc++)
        {
        if(!ar[x][y-rc]=='o')
            break;
    }
        rc=rc-2;
    }
}
void checkendir()
{int enddir;
   if(ar[m+1][y]=='o')
    enddir='s';
   if(ar[m-1][y]=='o')
    enddir='w';
    if(ar[m][y+1]=='o')
    enddir='d';
    if(ar[m][y-1]=='o')
    enddir='a';

  if(enddir=='w')
        {
        ar[m][n]= ' ';
        m=m-1;
    }
        if(enddir=='s')
        {
        ar[m][n]= ' ';
        m=m+1;
    }
        if(enddir=='a')
        {
        ar[m][n]= ' ';
        n=n-1;
    }
        if(enddir=='d')
        {
       ar[m][n]= ' ';
        n=n+1;
    }


}

int main()
{int i;
 initia();
  while(!strcmp(ch,"game over"))

     {show();
   logic();
    change();
        cout <<m<<" "<<n;
        Sleep(300);
   system("cls");



    }
return 0;
}
