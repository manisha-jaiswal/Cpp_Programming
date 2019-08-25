#include<iostream>
using namespace std;
class Swapping
{       int x,y;
public:
         Swapping(int a, int b)
        {
            int temp;
            x=a;
            y=b;
            cout<<"Before Swapping value is"<<endl;
            cout<<"value of x="<<x<<endl;
            cout<<"value of y="<<y<<endl;
            temp=x;
            x=y;
            y=temp;
            cout<<"After Swapping value is"<<endl;
            cout<<"value of x="<<x<<endl;
            cout<<"value of y="<<y<<endl;
        }
};
int main()
{
    int j,k;
    cout<<"Enter the two value for swapping"<<endl;
    cin>>j>>k;
    Swapping *t=new Swapping(j,k);
    delete(t);
    return 0;
}
