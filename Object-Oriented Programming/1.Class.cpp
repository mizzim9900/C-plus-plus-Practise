#include<iostream>
#include<conio.h>
using namespace std;
class student
{
int id,roll;
public:
    void getinput(void);
    void display(void);
    };
void student :: getinput(void)
{
    cout<<"Enter the id :";
    cin>>id;
    cout<<" Enter the roll:";
    cin>> roll;
}
void student :: display(void)
{
    cout<<"ID :"<<id<<endl;
    cout <<"Roll :"<< roll<<endl;
}
int main()
{
    student stu1;
    stu1.getinput();
    stu1.display();
}
