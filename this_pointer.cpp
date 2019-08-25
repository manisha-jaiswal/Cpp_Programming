#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    void disp()
    {
        a=5;
        b=6;
        cout<<"Address of current object  "<<this<<endl;
        cout<<"Value of A "<<this->a<<endl;
        cout<<"Value of B  "<<this->b<<endl;
    }
};
int main()
{
    Test t;
    t.disp();
}
