#include<iostream>
using namespace std;
int a,b,s;
    void Test()
    {
        a=5;
        b=6;
        class A
        {
            public:
            void sum()
            {
                s=a+b;
                cout<<"Sum of two number is  "<<s;
            }
        };
        A t;
        t.sum();
    }
int main()
{
    Test();
    return 0;
}
