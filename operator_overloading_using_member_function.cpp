#include<iostream>
using namespace std;
class Space
{
    int x,y,z;
public:
   void getdata(int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}
   void display(void)
{
    cout<<x<<" "<<endl;
    cout<<y<<" "<<endl;
    cout<<z<<" "<<endl;
}
   void operator -()
{
    x=-x;
    y=-y;
    z=-z;
}

};
int main()
{
    Space s;
    s.getdata(10,-20,30);
    -s;
    s.display();
    return 0;
}
