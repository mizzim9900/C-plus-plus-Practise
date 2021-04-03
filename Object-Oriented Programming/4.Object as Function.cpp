#include<iostream>
using namespace std;
class a
{
    int n;
public:
    void getdata(void);
    void display(void);
    a add(a,a);
};
void a::getdata(void)
{
    cout<<"Enter the number=";
    cin>>n;
}
void a::display(void)
{
    cout<<"Total="<<n<<endl;
}
a a::add(a x,a y)
{
    n=x.n+y.n;
}
int main()
{
    a p,q,res;
    p.getdata();
    q.getdata();
    res.add(p,q);
    res.display();
}
