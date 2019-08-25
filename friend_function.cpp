#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void inputa(int x)
    {
        a=x;
    }
    friend void add(A , B);
};
class B
{
    int b;
    public:
    void inputb(int y)
    {
        b=y;
    }
    friend void add(A , B);
};
void add(A a1, B b1)
{
    cout<<"Addition of A and B="<<a1.a+b1.b;
}
int main()
{
    A obj1;
    B obj2;
    obj1.inputa(10);
    obj2.inputb(20);
    add(obj1,obj2);
    return 0;
}
