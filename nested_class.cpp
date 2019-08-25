#include<iostream>
using namespace std;
class Test
{
     public:
    int b=6;
    int s=0;
    class A
    {
        public:
        int a=5;
        void disp()
        {
            cout<<"Value of a "<<a<<endl;
        }
    };
    A obj;

    void print()
    {
        cout<<"Value of b "<<b<<endl;
          s=obj.a+b;
        cout<<"Sum of two class integer types variable="<<s;

    }

};
int main()
{
    Test t;
    t.obj.disp();
    t.print();
    return 0;
}
