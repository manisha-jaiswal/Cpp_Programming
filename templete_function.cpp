#include<iostream>
using namespace std;
template <typename t>
void swapping(t x,t y)
{
    t temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"after  swapping value"<<endl<<x<<"  "<<y<<endl;;
}
int main()
{
    int a,b;
    float j,k;
    cout<<"Enter two value for swapping"<<endl;
    cin>>a>>b;
    cout<<"before swapping value"<<endl<<a<<"  "<<b<<endl;
    swapping(a,b);
    cout<<"Enter two value for swapping"<<endl;
    cin>>j>>k;
    cout<<"before swapping value"<<endl<<j<<"  "<<k<<endl;
    swapping(j,k);
    return 0;
}
