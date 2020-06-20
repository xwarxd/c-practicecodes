#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>

using namespace std;

void randomcard()
{
	string type;
	string value;

	int x = (1+rand()%4);

	switch(x)
	{
		case 1:
		{
			type = "Hearts";
			break;
		}

		case 2:
		{
			type = "Spades";
			break;
		}

		case 3:
		{
			type = "Clubs";
			break;
		}

		case 4:
		{
			type = "Diamonds";
			break;
		}
	}

	x = (1+rand()%13);

	switch(x)
	{
		case 1:
		{
			value = "Ace  ";
			break;
		}

		case 2:
		{
			value = "Two  ";
			break;
		}

		case 3:
		{
			value = "Three";
			break;
		}

		case 4:
		{
			value = "Four ";
			break;
		}

		case 5:
		{
			value = "Five ";
			break;
		}

		case 6:
		{
			value = "Six  ";
			break;
		}

		case 7:
		{
			value = "Seven";
			break;
		}

		case 8:
		{
			value = "Eight";
			break;
		}

		case 9:
		{
			value = "Nine ";
			break;
		}

		case 10:
		{
			value = "Ten  ";
			break;
		}

		case 11:
		{
			value = "Jack ";
			break;
		}

		case 12:
		{
			value = "Queen";
			break;
		}

		case 13:
		{
			value = "King ";
			break;
		}
	}

	cout << "Your card is " << value << " of " << type << endl;
}

int main()
{
	srand(time(0));

	for(;;)
	{
		randomcard();
		getch();
	}

    return 0;
}
