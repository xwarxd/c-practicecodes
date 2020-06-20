#include <iostream>
using namespace std;
class items
{
    private:
    string name;
    int size, weight;
    public:
    void datain();
    void dataout();
};

void items::datain()
{
    cout<<"Please enter the name of item. \n";
    cin>>name;
    cout<<"Please enter size and weight of "<<name<<endl;
    cin>>size>>weight;
}
void items::dataout()
{
    cout<<name<<"\t"<<size<<"\t"<<weight<<endl;
}
class persons
{
    private:
    string name;
    int age, height;
    public:
    void datain2();
    void dataout2();
};

void persons::datain2()
{
    cout<<"Please enter the name of person. \n";
    cin>>name;
    cout<<"Please enter age and height of "<<name<<endl;
    cin>>age>>height;
}
void persons::dataout2()
{
    cout<<name<<"\t"<<age<<"\t"<<height<<endl;
}

int main()
{
    int i, noitem, noperson;
    cout<<"Please enter the number of items. \n";
    cin>>noitem;
    items item[noitem];
    for(i=0; i<noitem; i++)
        item[i].datain();
    cout<<"Please enter the number of persons. \n";
    cin>>noperson;
    persons person[noperson];
    for(i=0; i<noperson; i++)
        person[i].datain2();
    cout<<"\n\nITEMS\nname\tsize\tweight\n";
    for(i=0; i<noitem; i++)
        item[i].dataout();
    cout<<"\n\nPERSONS\nname\tage\theight\n";
    for(i=0; i<noitem; i++)
        person[i].dataout2();
    return 0;
}






