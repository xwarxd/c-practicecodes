#include <iostream>
using namespace std;

class a
{
private:
	int varA;
	int varB;
public:
	a()
	{
		varA = 1;
		varB = 2;
	}

	void disp()
	{
		cout << "A = " << varA  << endl;
		cout << "B = " << varB  << endl;
	}

	~a()
	{
		cout << "Destructor is called \n";
	}
};

int main()
{
	a a1, a2;

	a1.disp();
	a2.disp();

	return 0;
}
