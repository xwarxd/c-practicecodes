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

	void get(int x, int y)
	{
		varA = x;
		varB = y;
	}

	void disp()
	{
		cout << "A = " << varA  << endl;
		cout << "B = " << varB  << endl;
	}

    friend void funcA();
};

void funcA(a a1, int x, int y)
{
	a1.get(x,y);
}

int main()
{


	a a1, a2;

	funcA(a1, 5, 6);

	a1.disp();
	a2.disp();

	return 0;
}
