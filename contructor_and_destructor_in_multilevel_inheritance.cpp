#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    A()
    {
        cout<<"Base class Constructor 1"<<endl;
    }
    ~A()
    {
        cout<<"Base class Destructor 1"<<endl;
    }
};
class B
{
    public:
   B()
   {
       cout<<"Derive class B constructor 2"<<endl;
   }
    ~B()
   {
       cout<<"Derive class B Destructor 2"<<endl;
   }
};
class C: public A,B
{
    public:
 C()
   {
       cout<<"Derive class C constructor 3"<<endl;
   }
    ~C()
   {
       cout<<"Derive class C Destructor 3"<<endl;
   }
};
int main()
{
   C c;
    return 0;
}

