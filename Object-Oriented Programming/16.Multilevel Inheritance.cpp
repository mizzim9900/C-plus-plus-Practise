#include<iostream>
using namespace std;
class cls1
{
protected:
    char name1[20],name2[20];
public:
    void getinput_1(void);
};
class cls2 : public cls1
{
protected:
    int price1,price2;
public:
    void getinput_2(void);
};
class cls3 : public cls2
{
    int sum;
public:
    int add(void);
    void display(void);
};
void cls1 :: getinput_1(void)
{
    cout<<"Enter the name1=";
    cin>>name1;
    cout<<"Enter the name2=";
    cin>>name2;
}
void cls2 :: getinput_2(void)
{
    cout<<"Enter the price of "<<name1<<"=";
    cin>>price1;
    cout<<"Enter the price of "<<name2<<"=";
    cin>>price2;
}
int cls3 :: add(void)
{
    sum=price1+price2;
    return sum;
}
void cls3 :: display(void)
{
    cout<<"\t"<<"Food"<<"\t"<<"Price"<<endl;
    cout<<"\t"<<name1<<"\t"<<price1<<endl;
    cout<<"\t"<<name2<<"\t"<<price2<<endl;
    cout<<"\t"<<"Total"<<"\t"<<sum<<endl;
}
int main()
{
    cls3 num;
    num.getinput_1();
    num.getinput_2();
    num.add();
    num.display();
}
