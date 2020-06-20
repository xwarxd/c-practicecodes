/*

Title:- TicTacToe Game
Creator:- Sanskar Agrawal
Date:- 12th April 2020

*/

#include <iostream>
using namespace std;

class tictactoe
{
private:

	char value;    // O or X

public:

	tictactoe()    // Default Value is empty
	{
		value = ' ';
	}

	void getval(char x)
	{
		if(value==' ')
		value = x;
	}

	void putval()
	{
		cout << value;
	}

	char defval()
	{
		return value;
	}

} box[9];

void userinput(int turn)
	{
		int x;
		char val;

		if(turn%2==1)
			val = 'O';
		else
			val = 'X';

		cout << "Please enter the location where do you want to put " << val <<endl;
		cin >> x;
		box[x-1].getval(val);
	}

void show()
	{
		cout << endl;
		for(int i=0; i<9; i++)
		{
			box[i].putval();
			if((i+1)%3==0)
				cout << endl;
			else
				cout << "|";
		}
		cout << endl;
	}

int logic()
	{
		int i;

		// Horizontal Test

		for(i=0; i<9; i=i+3)
			if((box[i].defval()==box[i+1].defval()&&box[i+1].defval()==box[i+2].defval())&(box[i].defval()!=' '))
				return 1;

		// Vertical Test

		for(i=0; i<3; i++)
			if((box[i].defval()==box[i+3].defval()&&box[i+3].defval()==box[i+6].defval())&&(box[i].defval()!=' '))
				return 1;

		// Diagonal Tests

		if((box[0].defval()==box[4].defval()&&box[4].defval()==box[8].defval())&&(box[4].defval()!=' '))
				return 1;

		if((box[2].defval()==box[4].defval()&&box[4].defval()==box[6].defval())&&(box[4].defval()!=' '))
				return 1;

		return 0;
	}

	char winner(int x)
	{
		if(x%2==1)
			return 'O';
		return 'X';
	}

 int main()
	{
		bool gameover;
		for(int i=1; i<=9; i++)
		{
			userinput(i);
			show();
			gameover = logic();
			if(gameover==1)
			{
				cout << "Game Over!! " << winner(i) << " wins the game \n";
				return 0;
			}
		}
		cout << "oops!! the game is a draw";
		return 0;
	}

