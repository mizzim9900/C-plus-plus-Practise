#include<iostream>
using namespace std;
class company
{
    char name[20];
    char id[10];
    char dept[20];
public:
    void getdata(void);
    void display(void);
};
void company :: getdata(void)
{
    cout<<"Enter Name :";
    cin>>name;
    cout<<"Enter Id : ";
    cin>>id;
    cout<<"Enter Department :";
    cin>> dept;
}
void company :: display(void)
{
    cout<<"Name = "<<name<<endl;
    cout<<"Id = "<<id<<endl;
    cout<<"Department : "<<dept<<endl;
}
int main()
{
    int i;
    company manager[2],officer[3];
    for (i=0;i<2;i++)
    {
        cout<<"Number of manager="<<i+1<<endl;
        manager[i].getdata();
    }
     for (i=0;i<3;i++)
    {
        cout<<"Number of Officer="<<i+1<<endl;
        officer[i].getdata();
    }
     for (i=0;i<2;i++)
    {
        cout<<"Number of manager="<<i+1<<endl;
        manager[i].display();
    }
       for (i=0;i<3;i++)
    {
        cout<<"Number of Officer="<<i+1<<endl;
       officer[i].display();
    }
}
