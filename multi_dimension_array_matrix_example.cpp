#include<iostream>
using namespace std;
int main()
{
int num[2][2],i,j,sum;
sum=0;
cout<<"Enter the value of 2 order matrix"<<endl;
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        cin>>num[i][j];
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        cout<<" "<<num[i][j];
         sum=sum+num[i][j];
    }
      cout<<sum;
    cout<<endl;
    sum=0;
}
return 0;
}
