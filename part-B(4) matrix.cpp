#include<iostream>
using namespace std;
int main()
{
    int num1[2][2],num2[2][2],sum,col_sum,i,j;
    sum=0;col_sum=0;
    cout<<"Enter the value of two dimensional"<<endl;
    for(i=0;i,i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>num1[i][j];
        }
    }
     for(i=0;i,i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>num2[i][j];
        }
    }
     for(i=0;i,i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"  "<<num1[i][j]<<"  ";
           // sum=sum+num1[i][j];
        }
       cout<<endl;
    }
    cout<<"--------------------------------"<<endl;
     for(i=0;i,i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"  "<<num2[i][j]<<"  ";
           // sum=sum+num2[i][j];
        }
       cout<<endl;
    }
     cout<<"--------------------------------"<<endl;
     for(i=0;i,i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"  "<<num2[i][j]+num1[i][j]<<"  ";
            //sum=sum+num2[i][j];
        }
         cout<<endl;
    }
    return 0;
}
