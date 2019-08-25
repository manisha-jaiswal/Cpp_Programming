#include<iostream>
using namespace std;
class Base
{
    public:
    void Disp()
    {
        cout<<"This is my Disp Function of Base class"<<endl;
    }
    virtual void Show()
    {
        cout<<"This is my virtual Function show of Base class"<<endl;
    }
};
class Derived:public Base
{
    public:
         void Disp()
    {
        cout<<"This is my Derived Function of Derive class"<<endl;
    }
     void Show()
    {
        cout<<"This is my virtual Function Show Derive class"<<endl;
    }
};
int main()
{
    Base *ptr;
    Base objb;
    Derived objd;
    ptr=&objb;
    ptr->Disp();
    ptr->Show();
    ptr=&objd;
    ptr->Disp();
    ptr->Show();
    return 0;
}
