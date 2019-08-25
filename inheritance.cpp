#include<iostream>
using namespace std;
class Father
{
  int a=4;
protected:
    int c=6;
    public:
    int b=5;
    void disp_base()
    {
         cout<<"private data member in class father="<<a<<endl;
    }
};
class Son: public Father
{
    public:
    void disp()
    {
    //cout<<"private data member in class father="<<a<<endl;
    //here data member can not access because date member declare in private section.
    cout<<"public data member in class father="<<b<<endl;
    cout<<"protected data member in class father="<<c<<endl;
    }
};
int main()
{
    Son s;
    s.disp_base();
    s.disp();

}
