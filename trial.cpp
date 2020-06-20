
#include <iostream>
using namespace std;

class fruit
{
	public:
	int weight;
};

int happy()
{
	fruit apple;
	apple.weight=2;
	return apple.weight;
}

int main()
{
	cout<<happy();
	return 0;
}
