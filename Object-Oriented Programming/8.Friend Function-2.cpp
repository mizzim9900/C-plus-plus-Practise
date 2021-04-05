#include<iostream>
using namespace std;
class A
{
    int x;
public:
    void getinput(void)
    {
        cout<<"Enter the input=";
        cin>>x;
    }
    void display(void);
};
class B
{
    int y;
public:
    void getinput1(void)
    {
        cout<<"Enter the input =";
        cin>>y;
    }
    friend void A :: display();
};
void A :: display(void)
{
    B p;
    A q;
    p.getinput1();
    q.getinput();
    cout<<"Total="<<p.y+q.x;
}
int main()
{
    A x;
    x.display();

}
