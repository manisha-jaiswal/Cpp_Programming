#include<iostream>
using namespace std;
int main()
{
    int num[5],sum;
    sum=0;
    cout<<"enter any five value"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }
    for(int i=0; i<5; i++)
    {
        cout<<"Value of Array="<<num[i]<<endl;
        sum=sum+num[i];
    }
    cout<<"Total sum="<<sum;
}
