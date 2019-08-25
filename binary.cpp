#include<iostream>
using namespace std;
class Complex
{
    int real,img;
public:
    Complex()
    {
    }
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    Complex add(int a,Complex c)
    {
      Complex temp;
      temp.real=a+c.real;
      temp.img=c.img;
      return temp;
    }
    Complex add(Complex c1,Complex c2)
    {
        Complex temp;
        temp.real=c1.real+c2.real;
        temp.img=c1.img+c2.img;
        return temp;
    }
    void display()
    {
cout<<real<<" + i"<<img<<endl;
    }
};
int main()
{
    Complex c1(4,5);
    Complex c2(7,16);
    Complex c3;
    c3=c3.add(4,c1);
    c3.display();
    c3=c3.add(c1,c2);
    c3.display();

return 0;
}
