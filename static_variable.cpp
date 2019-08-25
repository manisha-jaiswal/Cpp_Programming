#include<iostream>
using namespace std;
class A
{
    int num;
    public:
        static int Count;
        void get(int x)
        {
            num=x;
            cout<<"Value of variable "<<num<<endl;
            Count++;
        }
        void disp()
        {
            cout<<"Static Variable "<<Count<<endl;
        }
};
  int A::Count=10;
int main()
{
    int n,k,l;
     cout<<"Enter any number"<<endl;
    cin>>n>>k>>l;
    A a,b,c;
    a.disp();
    b.disp();
    c.disp();
    a.get(n);
    b.get(k);
    c.get(l);
    a.disp();
    b.disp();
    c.disp();
    return 0;
}
