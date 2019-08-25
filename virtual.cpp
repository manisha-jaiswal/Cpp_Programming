#include<iostream>
using namespace std;
class Base
{
public:
    void Display_Base()
    {
        cout<<"Base class Display Function"<<endl;
    }
};
class Derived1:public virtual Base
{
    public:
    void Display_D1()
    {
        cout<<"Derived1 class Display Function"<<endl;
    }
};
class Derived2:public virtual Base
{
    public:
    void Display_D2()
    {
        cout<<"Derived2 class Display Function"<<endl;
    }
};
class Derived3:public Derived1, public Derived2
{
    public:
    void Display_D3()
    {
        cout<<"Derived3 class Display Function"<<endl;
    }
};
int main()
{
    Derived3 d;
   d.Display_Base();
    d.Display_D1();
    d.Display_D2();
    d.Display_D3();


}
