#include<iostream>
using namespace std;
class Test
{
    int h,m;
    public:
    void get_input(int h1, int m1)
    {
        h=h1;
        m=m1;
    }
    void disp()
    {
        cout<<"Total Time "<<h<< " "<<m<<endl;
    }
    void Time(Test,Test);
};
void Test ::Time(Test t1,Test t2)
{
    m=t1.m+t2.m;
    h=m/60;
    m=m%60;
    h=h+t1.h+t2.h;
}
int main()
{
    Test a,b,c;
    a.get_input(4,30);
    a.disp();
    b.get_input(5,50);
    b.disp();
    c.Time(a,b);
    c.disp();
    return 0;
}
