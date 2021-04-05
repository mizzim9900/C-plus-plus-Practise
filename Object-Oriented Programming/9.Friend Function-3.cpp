#include<iostream>
using namespace std;
class lenevo;
class asus
{
    int p2;
public:
    void getdata(void)
    {
        cout<<"Enetr the price:";
        cin>>p2;
    }
    friend void add(asus,lenevo);
};
class lenevo
{
    int p1;
public:
     void getdata(void)
    {
        cout<<"Enetr the price:";
        cin>>p1;
    }
    friend void add(asus , lenevo );
};
void add(asus m , lenevo n)
   {
       int sum;
       sum=m.p2+n.p1;
       cout<<"Total Discount="<<sum<<endl;
   }
int main()
{
    asus a;
    lenevo b;
    a.getdata();
    b.getdata();
    add(a,b);
}
