#include<iostream>
using namespace std;
class counter
{
    static int i;
    int n;
public:
    void data(void)
    {
        i++;
        n=i++;
    }
    void display(void)
    {
        cout<<"N="<<n<<endl;
    }
    void dis(void)
    {
        cout<<"I="<<i<<endl;
    }
};
int counter :: i;
int main()
{
    counter a,b,c;
    a.data();
    b.data();
    c.data();
    a.dis();
    b.dis();
    c.dis();
    a.display();
    b.display();
    c.display();
}

