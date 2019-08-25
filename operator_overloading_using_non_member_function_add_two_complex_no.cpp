#include<iostream>
using namespace std;
class Complex2;
class Complex1
{
    float a, b;
    public:
    void input_com(float x, float y)
    {
        a=x;
        b=y;
    }
    friend void operator +(Complex1,Complex2);
};
class Complex2
{
    float c,d;
    public:
    void input_com(float x, float y)
    {
        c=x;
        d=y;
    }
    friend void operator +(Complex1,Complex2);
};
void operator +(Complex1 c1, Complex2 c2 )
{
    cout<<c1.a+c2.c<<" + i"<<c1.b+c2.d;

}
int main()
{
    float j,k,m,n;
    Complex1 c;
    Complex2 cc;
    cout<<"Enter real part:- "<<endl;
    cin>>j;
    cout<<"Enter imaginary part:- "<<endl;
    cin>>k;
    cout<<"Enter real part:- "<<endl;
    cin>>m;
    cout<<"Enter imaginary part:- "<<endl;
    cin>>n;
    c.input_com(j,k);
    cc.input_com(m,n);
    c+cc;
}
