#include<iostream>
using namespace std;
class Complex{
    float x,y;
public:
    Complex()
    {
        x=0;
        y=0;
    }
    Complex(float real , float img)
    {
        x=real;
        y=img;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
    void display()
    {
        cout<<x<<" + i"<<y<<endl;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1=Complex(2.5,3.5);
    c2=Complex(1.6,2.7);
    c3=c1+c2;
    cout<<"Value of c1= ";
    c1.display();
     cout<<"Value of c2= ";
    c2.display();
     cout<<"Value of c3(addition of c1 and c2)= ";
    c3.display();
    return 0;
}
