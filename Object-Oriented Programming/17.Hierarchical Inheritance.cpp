#include<iostream>
using namespace std;
class cls1
{
protected:
    int m,n;
public:
    void getinput(void)
    {
        cout<<"Enter the value of m=";
        cin>>m;
        cout<<"Enter the value of n=";
        cin>>n;
    }
};
class cls2 : public cls1
{
public:
    void add(void)
    {
        getinput();
        cout<<"Add:"<<m+n<<endl;
    }
};
class cls3 : public cls1
{
public:
   void sub(void)
    {
        getinput();
        cout<<"Subtraction:"<<m-n<<endl;
    }
};
int main()
{
    cls2 a;
    cls3 b;
    a.add();
    b.sub();
}

