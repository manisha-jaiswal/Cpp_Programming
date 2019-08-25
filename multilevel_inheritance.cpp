#include<iostream>
using namespace std;
class A
{
    public:
    int a=5;

};
class B:public A
{
    public:
    int b=6;

};
class C:public B
{
    public:
     void disp()
    {
        cout<<"class A data member a="<<a<<endl;
         cout<<"class B data member a="<<b<<endl;
        cout<<"Addition of base and derived class data member ="<<a+b;
    }
};
int main()
{
    C b;
    b.disp();
}
