#include <iostream>
#include <conio.h>
using namespace std;

class student
{
private:
    char name[20];
    int rollno;
    int percentage;
public:
    void getdata()
    {
        cout << "Please enter the name of student \n";
        cin >> name;
        cout << "Please enter the roll no and percentage of " << name << endl;
        cin >> rollno >> percentage;
    }

    void putdata()
    {
        cout << "name " << name <<endl;
        cout << "roll no " << rollno <<endl;
        cout << "percentage " <<percentage <<endl;
    }
};

    int main()
    {
        student s1, s2, s3;
        s1.getdata();
        s1.putdata();
        s2.getdata();
        s2.putdata();
        s3.getdata();
        s3.putdata();

        getch();

        return 0;
    }


