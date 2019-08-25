#include<iostream>
using namespace std;
class A
{
public:
     int a=10;;
    void disp()
    {

        cout<<"Class of A="<<a<<endl;
    }

};
class B:public A
{
    public:
    void disp()
    {
        cout<<"Class of B"<<endl;
        A::disp();
    }
};
int main()
{
    B b1,b2;
    b1.disp();
   // b1.A::disp();
    return 0;
}
