#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    A(int x)
    {
        cout<<"Base class Constructor"<<endl;
        a=x;
    }
};
class B:public A
{
    int b;
    public:
    B(int j, int k): A(k)
    {
        b=j;
    }
    void disp()
    {
        cout<<"value of Base class A="<<a<<endl;
        cout<<"value of child class B"<<b<<endl;
        }
};
int main()
{
    B b2(5,6);
   b2.disp();
    return 0;
}

