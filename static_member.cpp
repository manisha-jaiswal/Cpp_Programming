#include<iostream>
using namespace std;
class Test
{
    int num;
    static int Count;
    public:
    void get_input()
    {
        num=++Count;
    }
    void disp()
    {
        cout<<"Value of Integer variable "<<num<<endl;
    }
    static void Func()
    {
        cout<<"Value of Static Integer variable "<<Count<<endl;
    }
};
     int Test::Count;
int main()
{
    Test t1,t2;
    t1.get_input();
    t2.get_input();
    t1.disp();
    t2.disp();
     Test::Func();
    return 0;
}
