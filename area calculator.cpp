#include <iostream>
#include <stdlib.h>
using namespace std;

int main (void)
{
   float area;
   int a,b,choice;
   cout<<"What to you want to do? \nEnter 1 to calculate area of square.\nEnter 2 to calculate area of rectangle. \nEnter 3 to calculate area of circle. \nEnter 4 to calculate area of triangle. \n";
   cin>>choice;
   switch(choice)
   {
   	case 1:
   	system("cls");
   	cout<<"So you have choosen to calculate the area of square. \nPlease enter the length of side of square \n";
   	cin>>a;
   	area=a*a;
   	cout<<"The area of square is "<<area;
   	break;

   	case 2:
   	system("cls");
   	cout<<"So you have choosen to calculate the area of rectangle. \nPlease enter the length and breadth of rectangle \n";
   	cin>>a>>b;
   	area=a*b;
   	cout<<"The area of rectanlge is "<<area;
   	break;


   	case 3:
   	system("cls");
   	cout<<"So you have choosen to calculate the area of circle. \nPlease enter the radius of circle \n";
   	cin>>a;
   	area=a*a*3.14;
   	cout<<"The area of circle is "<<area;
   	break;


   	case 4:
   	system("cls");
   	cout<<"So you have choosen to calculate the area of triangle. \nPlease enter the base and height of triangle \n";
   	cin>>a>>b;
   	area=a*b*0.5;
   	cout<<"The area of triangle is "<<area;
   	break;
   }


}
