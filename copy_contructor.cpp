#include<iostream>
using namespace std;
class Test
{
    int x,y;
public:
    Test(int a, int b)
    {
        x=a;
        y=b;
    }
    Test( const Test &obj)//Declare Copy Constructor
    {
        x=obj.x;
        y=obj.y;
          }
    void Disp()
    {
        cout<<"Value of X="<<x<<endl;
        cout<<"Value of Y="<<y<<endl;
    }
};
int main()
{
    Test t1(10,20);
    Test t2(t1);
    t1.Disp();
    t2.Disp();
}
