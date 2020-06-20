#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>

using namespace std;

class hero;
class obstacles;
class space;

void clearscreen();
void definebox();
void draw();
void playermove();
void generateobs();
void obstaclemove();
void playerpos();
void collision(bool &gameover, int &col);
void score(int &col);

int main()
{
	int col=0;
	bool gameover=false;
    srand(time(0));
	generateobs();

    while(gameover==false)
	{
		clearscreen();
	    definebox();
	    playermove();
	    playerpos();
		draw();
		obstaclemove();
		collision(gameover, col);
		cout << "Score: " << col*100;
	}

	score(col);
	return 0;
}

class hero
{
private:
	int xcord;
	int ycord;
public:
	hero()
	{
	    xcord = 12;
		ycord = 18;
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
}player;

class obstacles
{
private:
	int xcord;
	int ycord;
	char val;
public:

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

	char getval()
	{
		return val;
	}

	void takeval(char x)
	{
		val = x;
	}
}obs[5];


class space
{
private:
	char value;
public:
	space()
	{
		value = ' ';
	}
	char getval()
	{
		return value;
	}

	void takeval(char x)
	{
		value = x;
	}

}box[25][20];

void clearscreen()      // Clears the screen with no lags
{
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}

void definebox()
{
	int i;

	for(i=0; i<25; i++)
	{
		for(int j=0; j<20; j++)
		{
			if((i==0||i==24)||(j==0||j==19))
			box[i][j].takeval('#');
		}
	}

	for(i=0; i<5; i++)
	{
		if(obs[i].gety()>0&&obs[i].gety()<19)
			box[obs[i].getx()][obs[i].gety()].takeval(obs[i].getval());
	}
}

void draw()
{
    for(int j=0; j<20; j++)
	{
		for(int i=0; i<25; i++)
            cout << box[i][j].getval();
        cout<<endl;
	}
}

void playermove()
{
    int val = player.getx();
    int dir;

    if(kbhit())
    dir = getch();

	else
	dir = ' ';

    switch(dir)
    {
        case 'a':
        {
        	box[player.getx()][player.gety()].takeval(' ');
        	val--;
        	break;
        }

        case 'd':
        {
        	box[player.getx()][player.gety()].takeval(' ');
        	val++;
        	break;
        }

    }

    if(val==24)
        val = 23;
    else if(val==0)
        val=1;

    player.takex(val);
}

void generateobs()
{
	obs[0].takey(0);
	obs[1].takey(-6);
	obs[2].takey(-12);
	obs[3].takey(-18);
	obs[4].takey(-24);
}

void obstaclemove()
{
	int ycord[5];

	for(int i=0; i<5; i++)
	{
		ycord[i] = obs[i].gety();

		if(ycord[i]==0)
		{
			if(i!=0)
			obs[i].takex(1+rand()%23);

			else
			obs[i].takex(player.getx());

			char type[11] = {'&' , '$' , '@' , '_' , '*' , '?' , '+' , '^' , '!' , '~' , '%'};

			obs[i].takeval(type[rand()%11]);
		}

		if(ycord[i]>0)
		box[obs[i].getx()][obs[i].gety()].takeval(' ');
		ycord[i]++;

		obs[i].takey(ycord[i]);
	}
}

void playerpos()
{
	box[player.getx()][player.gety()].takeval('O');
}

void collision(bool &gameover, int &col)
{
	for(int i=0; i<5; i++)
	{
		if(obs[i].gety()==20)
		{
			obs[i].takey(0);
			col++;
			if(col%100==0)
                Beep(1000, 100);

			else if(col%10==0)
                Beep(500,50);
		}

		if(obs[i].getx()==player.getx()&&obs[i].gety()==player.gety())
			gameover = true;
	}

    if(100-(col/10)>0)
	Sleep(100-(col/10));

	else
    Sleep(1);
}

void score(int &col)
{
	Beep(500,200);
	Beep(250,300);
	Beep(500,200);
	cout << "\nGame Over!! Your Score Was " << col*100;
	Sleep(1000);
	cout << "\n\nCreated by: Sanskar Agrawal";
	getch();
}

