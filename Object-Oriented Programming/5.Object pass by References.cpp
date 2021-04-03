#include<iostream>
using namespace std;
class str
{
    int n;
public:
    void getinput(void);
    void display(void);
    void add(str&,str&);
};
void str::getinput(void)
{
    cout<<"Enter the number=";
    cin>>n;
}
void str :: display(void)
{
    cout<<"Total="<<n;
}
void str::add(str &x,str &y)
{
    n=x.n+y.n;
}
int main()
{
    str a,b,c;
    a.getinput();
    b.getinput();
    c.add(a,b);
    c.display();
}
