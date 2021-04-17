#include<iostream>
using namespace std;
class cls1
{
    int  z;
public:
    char a[20];
    void getinput(void);
    int retrn(void);
};
class cls2 : public cls1
{
    int id;
public:
    int mak(void);
    void display(void);
};
void cls1 :: getinput(void)
{
    cout<<"Enter your name:";
    cin>>a;
    cout<<"Enter your number:";
    cin>>z;
}
int cls1 :: retrn(void)
{
    return z;
}
int cls2 :: mak(void)
{
    id=1100+retrn()%100;
    return id;
}
void cls2 :: display(void)
{
    cout<<"Name:"<<a<<endl;
    cout<<"Number:"<<retrn()<<endl;
    cout<<"Id:"<<id<<endl;
}
int main()
{
    cls2 num;
    num.getinput();
    num.mak();
    num.display();
}
