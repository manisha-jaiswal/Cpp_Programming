#include<iostream>
using namespace std;
class Triangle
{
    public:
         float a,b;
        void Triangle_input(float x, float y)
        {
            a=x;
            b=y;
        }
};
class Rectangle
{
public:
     float c,d;
    void Rectangle_input(float x, float y)
    {
        c=x;
        d=y;
    }
};
class Square: public Triangle, public Rectangle
{
public:
    float e,st;
    void Square_input(float x)
    {
        e=x;

    }
    void operation()
    {
        st= a*b/2;
        cout<<"Area of Triangle="<<st<<endl;
        st=a*b;
        cout<<"Area of Rectangle="<<st<<endl;
        st=e*e;
        cout<<"Area of Square="<<st<<endl;
    }
};
int main()
{
    Square s;
    float j,k,l,m,n;
    cout<<"Enter the value of base and height for calculate area of triangle"<<endl;
    cin>>j>>k;
    s.Triangle_input(j,k);
    cout<<"Enter the value of width and length for calculate area of rectangle"<<endl;
    cin>>l>>m;
    s.Rectangle_input(l,m);
    cout<<"Enter the value of side for calculate area of square"<<endl;
    cin>>n;
    s.Square_input(n);
    s.operation();
    return 0;
}

