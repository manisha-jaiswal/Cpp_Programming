#include<iostream>
using namespace std;
int main()
{
    int num,n,sum;
    sum=0;
    cout<<"Enter the number of index in array"<<endl;
    cin>>n;
     cout<<"----------------------------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        int num[n];
        cout<<"Enter the value of Index Element = "<<num[i]<<" = ";
        cin>>num[i];
        cout<<"Index value="<<i<<" = "<<num[i]<<endl;
        sum=sum+num[i];
    }
    cout<<"Total sum of array="<<sum<<endl;
    return 0;
}
