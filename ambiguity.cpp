#include<iostream>
using namespace std;
class A
{
    public:
    void disp()
    {
        cout<<"Base class A message"<<endl;
    }
};
class B
{
    public:
    void disp()
    {
        cout<<"Derived class B message"<<endl;
    }
};
class C:public A , public B
{
    public:
    void disp()
    {
        cout<<"Derived class C message"<<endl;
    }
};
int main()
{
    C c;
    c.disp();
    c.B::disp();
    c.A::disp();
    return 0;
}
