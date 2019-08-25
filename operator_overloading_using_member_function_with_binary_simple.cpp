#include<iostream>
using namespace std;
class A
{
    int a,b,s;
public:
    void get_input1()
    {
        cout<<"enter any number"<<endl;
        cin>>a;
    }
    void get_input2()
    {
        cout<<"enter any number"<<endl;
        cin>>b;
    }
    void operator +(A obj)
    {
        A temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;

    }
    void disp()
    {
            s=a+b;
            cout<<"Sum of a and b="<<s;
    }
};
int main()
{
    A a;
    a.get_input1();
    a.get_input2();
    return 0;
}









