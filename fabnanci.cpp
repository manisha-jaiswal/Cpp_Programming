#include<iostream>
using namespace std;
int main()
{
    int num,i,f,s,nxt;
    f=0,s=1;
    cout<<"Enter number times print Fibonacci series"<<endl;
    cin>>num;
    for(i=0;i<num;i++)
    {
        if(i<=1)
        {
            nxt=i;
        }
        else
        {
            nxt=f+s;
            f=s;
            s=nxt;
        }
        cout<<" "<<nxt;
    }
}
