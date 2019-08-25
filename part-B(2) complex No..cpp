#include<iostream>
using namespace std;
class COMPLEX
{
public:
    int real,img;
    void get_input()
    {
        cout<<"Enter real number"<<endl;
        cin>>real;
        cout<<"Enter imaginary number"<<endl;
        cin>>img;
    }
    void show()
    {
        cout<<real<<" + i"<<img<<endl;
    }
    friend COMPLEX add(int , COMPLEX );
    friend COMPLEX add(COMPLEX , COMPLEX );
};
COMPLEX add(int a, COMPLEX c)
{
    COMPLEX temp;
    temp.real=a+c.real;
    temp.real=c.img;
    return temp;
}
COMPLEX add(COMPLEX c1,COMPLEX c2)
{
    COMPLEX temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    int a;
    COMPLEX s1,s2,s3;
    s1.get_input();
    cout<<"Enter integer value"<<endl;
    cin>>a;
    s1.show();
    s2=add(a,s1);
    s2.show();
    /*s3=add(s1,s2);
    s3.show();*/
    return 0;
}
