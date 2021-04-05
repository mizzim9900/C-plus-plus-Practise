#include <iostream>
using namespace std;
class a
{
    int p1,p2;
public:
    a ();
    a (int);
    a(int ,int);
    void show(void);
};
a :: a()
{
    p1=4;
    p2=5;
}
a :: a(int s)
{
    p1=p2=s;
}
a :: a(int x,int y)
{
    p1=x;
    p2=y;
}
void a :: show(void)
{
    cout<<"P1="<<p1<<"\t"<<"P2="<<p2<<endl;
}
int main()
{
    a a1;
    a a2(2);
    a a3(1,2);
    a1.show();
    a2.show();
    a3.show();
}
