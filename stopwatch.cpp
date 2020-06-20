#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>

void clearscreen()      // Clears the screen with no lags
{
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 15;
    Position.Y = 2;
    SetConsoleCursorPosition(hOut, Position);
}

int main()
{
	std::cout << "Press any key to start the timer \n";
	getch();
    int x = time(0);
	std::cout << "Press any key to stop the timer \n\ttime = ";

	for(int i=1;; i++)
	{
	    if(i!=1)
	    Sleep(100);
        clearscreen();
		std::cout << time(0) - x << " Seconds";
		if(kbhit())
			break;
	}

	std::cout << "\n\nTotal time = " << time(0) - x << " Seconds";
	getch();
	return 0;
}

