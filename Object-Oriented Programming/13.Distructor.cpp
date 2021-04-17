#include<iostream>
#include<conio.h>
using namespace std;
class file
{
    char a[20],b[20];
    int roll;
public:
    file();
    ~file();
    void display(void);
    void getinput(void);
};
file :: file()
{
    cout<<"Manager staement"<<endl;
}
void file :: getinput(void)
{
    cout<<"Enter name=";
    cin>>a;
    cout<<"Enter Id=";
    cin>>roll;
    cout<<"Enter adress=";
    cin>>b;
}
void file :: display(void)
{
    cout<<"Name:"<<a<<endl;
    cout<<"Id:"<<roll<<endl;
    cout<<"Adress:"<<b<<endl;
}
file :: ~file()
{
    cout<<"Memory Terminated"<<endl;
}
int main()
{
    {
        file s1;
        s1.getinput();
        s1.display();
    }
        getch();
        file s1;
        s1.display();
}
