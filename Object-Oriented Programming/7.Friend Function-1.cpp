#include<iostream>
using namespace std;
class tot
{
    int a,b;
public:
    void getinput(void);
    friend int add(tot p);
};
void tot :: getinput(void)
{
    cout<< "Enter the two number=";
    cin>>a>>b;
}
int add(tot p)
{
    int sum;
    sum=p.a+p.b;
    return sum;
}
int main()
{
    tot x;
    int res;
    x.getinput();
    res=add(x);
    cout<<"Total="<<res;
}
