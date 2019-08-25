#include<iostream>
using namespace std;
class A
{
protected:
    float a;
    public:
   void get_input_a(float x)
{
    a=x;
}
};
class B
{
protected:
    float b;
public:
   void get_input_b(float y)
{
    b=y;
}
};
class C : public A , public B
{
    float area,rect;
    public:
    void area_of_triangle(float x, float y)
    {
        float area;
        a=x;
        b=y;
        area=(a*b)/2;
        cout<<"Area of triangle="<<area<<endl;
    }
    void area_of_rect(float x, float y)
    {
        float area;
        a=x;
        b=y;
        area=(a*b);
        cout<<"Area of Rectangular="<<area<<endl;
    }
    void display()
    {
        cout<<"value1="<<a<<endl;
        cout<<"value2="<<b<<endl;
    }
};
int main()
{
    cout<<"Find the area of triangle and rectangle"<<endl;
   C obj3;
   obj3.get_input_a(10.0);
   obj3.get_input_b(12.0);
   obj3.display();
   obj3.area_of_rect(10.0,12.0);
   obj3.area_of_triangle(10.0,12.0);
}
