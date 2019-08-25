#include<iostream>
using namespace std;
int main()
{
    int *p,arr[5],i,sum;
    sum=0;
    cout<<"Enter five element in array"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
        p=arr;
        sum=sum+*p;
        *p++;
    }
    cout<<"Total Sum "<<sum;
    return 0;
}
