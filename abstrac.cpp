#include<iostream>
using namespace std;
class A
{
public:
    virtual void disp()=0;
};
class B:public A
{
  public:
    void disp()
    {
        cout<<"Derived class";
    }
};
int main()
{
    A *ptr;
    B b;
    ptr=&b;
    ptr->disp();
    return 0;
}
