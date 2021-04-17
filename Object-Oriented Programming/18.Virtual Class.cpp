#include<iostream>
using namespace std;
class cls1
{
protected:
    char name[20];
public:
    void getinput1(void)
    {
        cout<<"Enter the food name=";
        cin>>name;
    }
};
class cls2 : virtual public cls1
{
protected:
    int price;
public:
    void getinput2(void)
    {
        cout<<"Enter the price of "<<name<<"=";
        cin>>price;
    }
    void dis2(void)
    {
        cout<<"Price :"<<price<<endl;
    }
};
class cls3 : virtual public cls1
{
protected:
    int p;
public:
    void getinput3(void)
    {
        cout<<"Enter the number of "<<name<<"=";
        cin>>p;
    }
    void dis3(void)
    {
        cout<<"Number :"<<p<<endl;
    }
};
class cls4 : public cls2 , public cls3
{
    int sum;
public:
    void add(void)
    {
        sum=(price*p);
    }
    void disp(void)
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Total price :"<<sum<<endl;
    }
};
int main()
{
    cls4 num;
    num.getinput1();
    num.getinput2();
    num.dis2();
    num.getinput3();
    num.dis3();
    num.add();
    num.disp();
}

