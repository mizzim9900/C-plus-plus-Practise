#include<iostream>
using namespace std;
class A
{
    int a;
public:
    void getdata(void);
    int condition(void);
    void display(void);
};
void A :: getdata(void)
{
    cout<<"enter the number=";
    cin>>a;
}
int A :: condition(void)
{
    int i,sum=0;
    for(i=1;i<=a;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void A :: display(void)
{
    cout<<"Sum="<<condition();
}
int main()
{
    A num;
    num.getdata();
    num.display();
}
