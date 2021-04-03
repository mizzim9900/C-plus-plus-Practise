#include<iostream>
using namespace std;
class a
{
    int matrix[2][2];
public:
    void getdata(void);
    void display(void);
    a total(a,a);
};
void a :: getdata (void)
{
    int i,j;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         cin>>matrix[i][j];
        }
    }
}
a a :: total(a x,a y)
{
    a sum;
    int i,j;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          sum.matrix[i][j] = x.matrix[i][j] + y.matrix[i][j];
        }
    }
    return (sum);
}
void a :: display (void)
{
 int i,j;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         cout<<"  "<<matrix[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    a p,q,res,add;
    cout<<"Enter the first matrix:"<<endl;
    p.getdata();
    cout<<"The first matrix:"<<endl;
    p.display();
    cout<<"Enter the second matrix:"<<endl;
    q.getdata();
    cout<<"The second matrix:"<<endl;
    q.display();
    add = res.total(p,q);
    cout<<"The total matrix:"<<endl;
    add.display();
}
