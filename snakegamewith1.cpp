#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int pairer(int a, int b);

char box[20][40];

class snake
{
private:
	int xcord;
	int ycord;
public:
	snake()
	{
		xcord = 10;
		ycord = 20;
	}

	int getx()
	{
		return xcord;
	}

	void takex(int x)
	{
		xcord = x;
	}

	int gety()
	{
		return ycord;
	}

	void takey(int y)
	{
		ycord = y;
	}


}size[40];

void definebox()
{
	for(int i=0; i<20; i++)
	{
		for(int j=0; j<40; j++)
		{
			if(i==0||i==19)
			box[i][j] = '#';

			else
			{
				if(j==0||j==39)
					box[i][j] = '#';
				else if(box[i][j]!='*')
					box[i][j] = ' ';
			}
		}
	}
}

void showbox()
{
	for(int i=0; i<20; i++)
	{
		for(int j=0; j<40; j++)
		{
			cout << box[i][j];
		}
		cout << endl;
	}
}

int fruitpos(int i, int &lastpos)
{
    srand(time(0));

	int xcord = (1+rand()%18);
	int ycord = (1+rand()%38);

    if(i==1)
    {
		box[xcord][ycord] = '*';
    	lastpos = pairer(xcord, ycord);
    }

    return lastpos;
}


int snakepos(int col)
{

	char val = 'O';

	for(int i=0; i<=col; i++)
	{
		box[size[i].getx()][size[i].gety()] = val;
		val = 'o';
	}
	return pairer(size[0].getx(), size[0].gety());
}

char snakemove(char &lastkey, int col)
{
    char dir;
    int x;
    int y;

    if(kbhit()){
	        dir = getch();
	        lastkey = dir;
	    }
	    else
	    	dir = lastkey;
		x = size[0].getx();
		y = size[0].gety();

		for(int i = col; i>=1; i--)
		{

			size[i].takex(size[i-1].getx());
			size[i].takey(size[i-1].gety());
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

	    if(x==0)
	    	x = 18;
	    else if(x==19)
	    	x = 1;
	    if(y==0)
	    	y = 38;
	    else if(y==39)
	    	y = 1;

	    size[0].takex(x);
		size[0].takey(y);

	 return dir;
}

void collision(int a, int b, int &i, int &col)
{
	if(a==b)
    {
        i = 0;
        col++;
    }
}

int main()
{
    char lastkey;
    int i;
    int lastpos = 0;
    int col = 0;

    for(i=0;;i++)
    {
        definebox();
        fruitpos(i, lastpos);
        snakemove(lastkey, col);
        snakepos(col);
        showbox();
        collision(fruitpos(i, lastpos), snakepos(col), i, col);
        cout<<col;
        Sleep(100);
        system("cls");
    }

    return 0;
}

int pairer(int a, int b)
{
	return	(((a+b)*(a+b+1))+b);
}


