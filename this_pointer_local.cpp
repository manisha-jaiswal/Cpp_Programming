#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    void input(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void disp()
    {
        cout<<"Value of A:- "<<a<<endl;
        cout<<"Value of B:- "<<b<<endl;
    }
};
int main()
{
    Test t;
    t.input(10,20);
    t.disp();
}
