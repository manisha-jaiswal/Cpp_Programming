#include<iostream>
using namespace std;
void disp();
 int large,mid,small;
 inline void MAX(int a, int b, int c)
    {
       if(a>b && a>c)
    {
        large=a;
        if(b>c)
        {
            mid=b;
            if(b>c)
            {
                small=c;
            }
        }
        else
        {
            mid=c;
            if(c>b)
            {
                small=b;
            }
        }
       disp();
    }
   else if(b>c && b>a)
    {
        large=b;
        if(a>c)
        {
            mid=a;
            if(a>c)
            {
                small=c;
            }
        }
        else
        {
            mid=c;
            if(c>a)
            {
                small=a;
            }
        }
       disp();
    }
    else if(c>a && c>b)
    {
        large=c;
         if(a>b)
        {
            mid=a;
            if(a>b)
            {
                small=b;
            }
        }
        else
        {
            mid=b;
            if(b>a)
            {
                small=a;
            }
        }
        disp();
    }
  }
  inline void MIN(int a, int b)
  {
    if(a>b)
    {
        cout<<"Largest number is:-"<<a<<endl;
        cout<<"Smallest number is:-"<<b<<endl;
    }
    else
    {
        cout<<"Largest number is:-"<<b<<endl;
        cout<<"Smallest number is:-"<<a<<endl;
    }
  }
    void disp()
    {
        cout<<"First largest Number:- "<<large<<endl;
        cout<<"Second Middle Number:- "<<mid<<endl;
        cout<<"Last Smallest Number:- "<<small<<endl;
    }
int main()
{
    int x,y,z;
    cout<<"Enter any three number to check who first greatest and middle also third small"<<endl;
    cin>>x>>y>>z;
    cout<<".............This MAX function calling..............."<<endl;
    MAX(x,y,z);
    cout<<"Enter any two number weather check largest and smallest number"<<endl;
    cin>>x>>y;
    cout<<".............This MIN function calling..............."<<endl;
    MIN(x,y);
    return 0;
}
