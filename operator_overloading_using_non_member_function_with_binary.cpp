#include<iostream>
using namespace std;
class B;
class A
{
    int a;
public:
   void getdata()
{
   cout<<"enter first any number"<<endl;
   cin>>a;
}
  friend void operator >(A,B);
};
class B
{
    int b;
public:
    void getdata()
    {
    cout<<"enter second any number"<<endl;
    cin>>b;
    }
    friend void operator >(A,B);
};
void operator >(A a1, B b1)
{
    a1.a>b1.b?cout<<"a is greater:-"<<a1.a:cout<<"b is greater:-"<<b1.b;
}
int main()
{
  A a;
  B b;
  a.getdata();
  b.getdata();
  a>b;
    return 0;
}
