#include<iostream>
using namespace std;
class Shape
{
    float x,y;
    public:
    float pi=3.14;
    void volume(float r, float h)
    {   float str;
        x=r;
        y=h;
        str=pi*x*x*y;
        cout<<"Volume of Cylinder"<<endl;
        cout<<str<<endl;
    }
    void volume(float r)
    {   float str,str1,str3,ptr;
        ptr=(4/3);
        x=r;
        str1=(pi*x*x*x);
        str=str1*ptr;
        str3=x*x*x;
        cout<<"Volume of Sphere"<<endl;
        cout<<str<<endl;
        cout<<"Volume of Cube"<<endl;
        cout<<str3<<endl;
    }
};
int main()
{
    Shape s;
    s.volume(2,2);
    s.volume(3);
    return 0;
}
