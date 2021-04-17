#include<iostream>
using namespace std;
class cls1
{
protected:
    int asus;
public:
    void getinput1(void);
};
class cls2
{
protected:
    int hp;
public:
    void getinput2(void);
};
class cls3 : public cls1,public cls2
{
    float sum,sum1,sum2;
public:
    void add(void);
    void display(void);
};
void cls1 :: getinput1(void)
{
    cout<<"Enter the price of asus:";
    cin>>asus;
}
void cls2 :: getinput2(void)
{
    cout<<"Enter the price of hp:";
    cin>>hp;
}
void cls3 :: add(void)
{
    sum=(asus+hp);
    sum1=(sum*0.10);
    sum2=sum-sum1;
}
void cls3 :: display(void)
{
    cout<<"Asus:"<<asus<<endl;
    cout<<"HP:"<<hp<<endl;
    cout<<"Total price:"<<sum<<endl;
    cout<<"Discount:"<<sum1<<endl;
    cout<<"Price:"<<sum2<<endl;
}
int main()
{
    cls3 num;
    num.getinput1();
    num.getinput2();
    num.add();
    num.display();
}
