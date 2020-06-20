#include <iostream>

int percentage(int percentage, int amount);

int grosspay(int workhours, double payrate, int sthours, int otrate);

int taxes(int grosspay);

int netpay(int grosspay, int taxes);

int main()
{
	for(;;)
    {
		int choice;
		int workhours;
		double payrate;
        bool loop = 0;

		while(loop == 0)
		{
			std::cout << "*********************************************************\n";
			std::cout << "Enter the number corresponding to desired payrate or action:\n";
			std::cout << "1) $8.75/hr\t\t2) $9.33/hr\n3) $10.00/hr\t\t4) $11.20/hr\n5) Custom\t\t6) Quit\n";
			std::cout << "*********************************************************\n";
			std::cin >> choice; 

			loop = 1;

			switch(choice)
			{
				case 1:
				 {
				 	payrate = 8.75;
				 	break;
				 }

				 case 2:
				 {
				 	payrate = 9.33;
				 	break;
				 }

				 case 3:
				 {
				 	payrate = 10.00;
				 	break;
				 }

				 case 4:
				 {
				 	payrate = 11.20;
				 	break;
				 }

				 case 5:
				 {
                    std::cout << "Please enter the custom payrate in $/hour\n";
				 	std::cin >> payrate;
				 	break;
				 }

				 case 6:
				 {
				 	return 0;
				 }

				 default :
            	 {
					std::cout << "please re-enter again \n";
					loop = 0;
            	 }
			}
		}

		int sthours, otrate;

		std::cout << "Please enter the standard hours limt \n";
		std::cin >> sthours;
		std::cout << "Please enter the overtime extra rate in percentage \n";
		std::cin >> otrate;
		std::cout << "please enter the number of hours of worker \n";
		std::cin >> workhours;

		int igrosspay = grosspay(workhours, payrate, sthours, otrate);
		int itaxes = taxes(igrosspay);
		int inetpay = netpay(igrosspay, itaxes);

		std::cout << "\ngrosspay = $" <<igrosspay;
		std::cout << "\ntaxes = $" <<itaxes;
		std::cout << "\nnetpay = $" <<inetpay;
		std::cout << "\n\n";
    }
}

int percentage(int percentage, int amount)
{
	return ((percentage * amount)/100);
}

int grosspay(int workhours, double payrate, int sthours, int otrate)
{
	int grosspay = workhours * payrate;

	if(workhours>sthours)
	{
		payrate = (otrate * payrate)/100;
		grosspay = grosspay + ((workhours-sthours) * payrate);
	}

	return grosspay;
}

int taxes(int grosspay)
{
	int tax = percentage(15, grosspay);

	if(grosspay > 300)
	{
		tax = tax + percentage(5, grosspay-300);
	}

	if(grosspay > 450)
	{
		tax = tax + percentage(5, grosspay-450);
	}

	return tax;
}

int netpay(int grosspay, int taxes)
{
	return (grosspay - taxes);
}

