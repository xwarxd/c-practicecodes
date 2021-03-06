#include <iostream>
#include <string>
#include <windows.h>
#include <sstream>

std::string inttostring(int x) //converts an integer to string object
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

	int k = 48;  //at k = 48 char is 0 and then till 9 at k + 9

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

		CopyFile(file1, file2, TRUE);
	}

	std::cout << "file copied successfully \n\n created by:- Sanskar Agrawal";

	Sleep(10000);

	return 0;
}
