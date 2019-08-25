#include<iostream>
using namespace std;
void swapping(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"after swapping value"<<endl<<x<<"  "<<y;
}
int main()
{
    int a,b;
    cout<<"Enter two value for swapping"<<endl;
    cin>>a>>b;
    cout<<"before swapping value"<<endl<<a<<"  "<<b<<endl;
    swapping(a,b);
    return 0;
}
