/*
Program Name:- Snake Game
Created By:- Sanskar Agrawal
Date:- 15th April 2020
Works for:- Windows only
*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

void clearscreen()      // Clears the screen with no lags
{
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}

int pairer(int a, int b)	//Gives a unique value formed with 2 numbers
{
	return	(((a+b)*(a+b+1))+b);
}

class boxes
{
	private:
		char val;
	public:
		char getval()
		{
			return val;
		}
		void takeval(char x)
		{
			val = x;
		}
}box[20][40];

class fruit
{
private:
	int xcord;
	int ycord;
	int id;
public:
	fruit()
	{
		id = 1;
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

	int getid()
	{
		return id;
	}

	void takeid(int x)
	{
		id = id + x;
	}

}frt;

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

}size[100];

void definebox()
{
	for(int i=0; i<20; i++)
	{
		for(int j=0; j<40; j++)
		{
			if(i==0||i==19)
			box[i][j].takeval('#');

			else
			{
				if(j==0||j==39)
					box[i][j].takeval('#');
				else if(box[i][j].getval()!='*')
					box[i][j].takeval(' ');
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
			cout << box[i][j].getval();
		}
		cout << endl;
	}
}

int fruitpos(int &lastpos, int col)
{
	if(frt.getid()-col==1)
	{
	    srand(time(0));
		frt.takex((1+rand()%18));
        frt.takey((1+rand()%38));
        frt.takeid(1);
	}
		box[frt.getx()][frt.gety()].takeval('*');
    	lastpos = pairer(frt.getx(), frt.gety());

    return lastpos;
}


int snakepos(int col)
{

	char val = 'O';  //Snake head

	for(int i=0; i<=col; i++)
	{
		box[size[i].getx()][size[i].gety()].takeval(val);
		val = 'o';   //Snake Body
	}
	return pairer(size[0].getx(), size[0].gety());
}

char snakemove(char &lastkey, int col)
{
    char dir = ' ';
    int x;
    int y;

    if(kbhit()){
	        dir = getch();

	        switch(dir)
	        {
                case 'w': break;
                case 'a': break;
                case 's': break;
                case 'd': break;
                default : dir = lastkey;
	        }

	        if(lastkey=='w'&&dir=='s')      // checks if the lastkey is opposite of currrent key
	        	dir = 'w';

	        else if(lastkey=='a'&&dir=='d')
	        	dir = 'a';

	        else if(lastkey=='s'&&dir=='w')
	        	dir = 's';

	        else if(lastkey=='d'&&dir=='a')
	        	dir = 'd';

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

void collision(int a, int b, int &col)
{
    	if(a==b)
    {
        col++;
        Beep(5000,50);
	}
}

void score(int col)
{
    Beep(500,200);
	Beep(250,300);
	Beep(500,200);

    cout << "\nGameOver!! Your Score was " <<col*100 <<"\nAnd your snake size was "<<col+1;

    if(col*100>=10000)
    cout <<"\n\n\nCongrats for reaching 10000 score mark!! You truly won the game\n";

    else if(col*100>=5000)
    cout <<"\\n\n\nSo you reached 5000 score mark huh?\nI know it was hard but you can still improve!\n";

    getch();
}

bool gameover(int col)
{
	for(int i=1; i<=col; i++)
	{
		if(size[0].getx()==size[i].getx()&&size[0].gety()==size[i].gety())
		return true;
	}
	return false;
}

int main()
{
    char lastkey;
    int lastpos = 0;
    int col = 0;

    while(gameover(col)==false)
    {
        clearscreen();
        definebox();
        fruitpos(lastpos, col);
        snakemove(lastkey, col);
        snakepos(col);
        showbox();
        collision(fruitpos(lastpos, col), snakepos(col), col);
        cout << "score = " <<col*100;
        Sleep(80);
    }
    Sleep(500);
    score(col);
    return 0;
}



