#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int num;
    cout<<"Enter any number for print factorial number"<<endl;
    cin>>num;
    cout<<"Given number "<<num<<" factorial is "<<fact(num);
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return(n*fact(n-1));
}
