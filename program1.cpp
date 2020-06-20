#include <iostream>
#include <windows.h>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	srand(time(0));

	char consonants[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
	char vowels[] = {'a','e','i','o','u'};


for(;;)
	{
		int wordlength = 5;

		for(int currentlength = 0; currentlength <= wordlength; currentlength++)
		{
			cout << consonants[rand()%21];
			Sleep(100);
			currentlength++;
			if(currentlength >= wordlength)
				break;

			cout << vowels[rand()%5];
			Sleep(100);
	    }
	    getch();
	    cout << endl;
	}
}
