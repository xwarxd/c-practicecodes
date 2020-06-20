#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class bank
{
	private:
	int pin, bal;
	public:
	string name;

	void createacc()
	{
		system("cls");
		cout<<"Please enter your name \n";
		cin>>name;
		pin=0;
		while(pin==0)
		{
			system("cls");
			cout<<"Please enter a four digit pin no \n";
			cin>>pin;
			if(pin<1000||pin>9999)
			{
				cout<<"error invalid pin number please enter again \n";
				getch();
				pin=0;
			}
		}
		system("cls");
		cout<<"Please enter initial balance of your account \n";
		cin>>bal;
	}

	void depositbal()
	{
		system("cls");
		int dep;
		cout<<"Please enter the amount you want to deposit \n";
		cin>>dep;
		bal=bal+dep;
	}

	int withdrawbal()
	{
		system("cls");
		int cpin;
		cout<<"Please enter the pin no. \n";
		cin>>cpin;
		if(cpin!=pin)
		return 0;

		system("cls");
		int wthdrw;
		cout<<"Please enter the amount you want to withdraw \n";
		cin>>wthdrw;
		if(wthdrw>bal)
			{
				cout<<"error you dont have enough balance to withdraw \n";
				getch();
				return 0;
			}
		bal=bal-wthdrw;
	}

	int checkbalance()
	{
		system("cls");
		int cpin;
		cout<<"Please enter the pin no. \n";
		cin>>cpin;
		if(cpin!=pin)
		return 0;

		system("cls");
		cout<<"Your balance is "<<bal;
	}

};

int main()
{
	int i;
	string name;
	bool check;
	bank tries[20];
	for(int n=0;n<20;n++)
	{
		system("cls");
		cout<<"Hello this is a bank here you have following available functions \n";
		cout<<"Enter 1 to create an account \nEnter 2 to check your balance \nEnter 3 to deposit money \nEnter 4 to withdraw money \nEnter anything else to exit the program \n";
		cin>>i;
		switch(i)
		{
			case 1:
				tries[n].createacc();
				break;
			case 2:
				system("cls");
				cout<<"Please enter the name of person whose balance you want to check \n";
				cin>>name;
				check=0;
				for(int j=1; j<n; j++)
				{
					if(name==tries[j].name)
					{
						tries[j].checkbalance();
						check=1;
					}
				}
				if(check==0)
					    cout<<"error invalid name \n";
                        getch();
				break;
			case 3:
				system("cls");
				cout<<"Please enter the name of person to deposit money \n";
				cin>>name;
				check=0;
				for(int j=1; j<n; j++)
				{
					if(name==tries[j].name)
					{
						tries[j].depositbal();
						check=1;
					}
				}
				if(check==0)
					{
					    cout<<"error invalid name \n";
                        getch();
					}
				break;
			case 4:
				system("cls");
				cout<<"Please enter the name of person to withdraw money \n";
				cin>>name;
				check=0;
				for(int j=1; j<n; j++)
				{
					if(name==tries[j].name)
					{
						tries[j].withdrawbal();
						check=1;
					}
				}
				if(check==0)
					{
					    cout<<"error invalid name \n";
                        getch();
					}
				break;
			default :
				return 0;
		}
	}
	return 0;
}
