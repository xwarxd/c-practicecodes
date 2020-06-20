#include <iostream>
#include <string>
#include <windows.h>
//#include <conio.h>
#include <sstream>

std::string inttostring(int x)
{
	std::ostringstream temp;
	temp << x;
	return temp.str();
}

int main()
{
	std::cout << "Use this to mass copy a file into multiple folders in your directory \n\n";

	std::string tomove, aftermove, aftermovetemp, pathno, slash;

	int folstart, folend;

	int k = 48;

	std::cout << "Please enter the name of file to mass copy \n";
	std::getline(std::cin, tomove);

	std::cout << "Please enter the folder format \n";
	std::getline(std::cin, aftermovetemp);

	std::cout << "starts from folder no: \n";
	std::cin >> folstart;

	std::cout << "and ends at folder no: \n";
	std::cin >> folend;

	slash = "/";

	for(int i = folstart; i < folend; i++)
	{
	    aftermove = aftermovetemp;

	    pathno = inttostring(i);

		aftermove = aftermove + pathno + slash + tomove;

		char file1[tomove.size()+1];
		char file2[aftermove.size()+1];

		tomove.copy(file1, tomove.size() + 1);
		aftermove.copy(file2, aftermove.size() + 1);

		file1[tomove.size()] = '\0';
		file2[aftermove.size()] = '\0';

		//std::cout << file1 << "\t\t" << file2 << std::endl;

		//getch();

		CopyFile(file1, file2, FALSE);
	}

	std::cout << "file copied successfully \n\n created by:- Sanskar Agrawal";

	Sleep(10000);

	return 0;
}
