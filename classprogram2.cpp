#include <iostream>
#include <stdlib.h>
using namespace std;
class items
{
    public:
    string name;
    int size, weight;
    void datain();
    void dataout();
};

void items::datain()
{
    cout<<"Please enter the name of item. \n";
    cin>>name;
    cout<<"Please enter size and weight of "<<name<<endl;
    cin>>size>>weight;
    system("cls");
}

void items::dataout()
{
    cout<<name<<"\t"<<size<<"\t"<<weight<<endl;
}

class persons
{
    public:
    string name;
    int age, height;
    int datain();
    int dataout();
};

int persons::datain()
{
    cout<<"Please enter the name of person. \n";
    cin>>name;
    cout<<"Please enter age and height of "<<name<<endl;
    cin>>age>>height;
    system("cls");
    return 0;
}

int persons::dataout()
{
    cout<<name<<"\t"<<age<<"\t"<<height<<endl;
    return 0;
}

int main()
{
    int i, noitem, noperson;
    string name;
    cout<<"Please enter the number of items. \n";
    cin>>noitem;
    items item[noitem];
    for(i=0; i<noitem; i++)
        item[i].datain();
    cout<<"Please enter the number of persons. \n";
    cin>>noperson;
    persons person[noperson];
    for(i=0; i<noperson; i++)
        person[i].datain();
    cout<<"please enter the name of item whose details you want to access. \n";
    cin>>name;
    cout<<"\n\nITEMS\nname\tsize\tweight\n";
    for(i=0; i<noitem; i++)
    {
        if(name==item[i].name)
            item[i].dataout();
    }
    cout<<"please enter the name of person whose details you want to access. \n";
    cin>>name;
    cout<<"\n\nPERSONS\nname\tage\theight\n";
    for(i=0; i<noperson; i++)
    {
        if(name==person[i].name)
            person[i].dataout();
    }

    return 0;
}






