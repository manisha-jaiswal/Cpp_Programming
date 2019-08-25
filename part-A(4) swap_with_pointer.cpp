#include<iostream>
using namespace std;
void swap_num(int *a , int *b)
    {
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }

int main()
{
    int x,y;
   cout<<"enter two number for swapping"<<endl;
    cin>>x>>y;
    cout<<"Before swapping"<<endl;
    cout<<"number1="<<x<<endl<<"number2="<<y<<endl;
    swap_num(&x,&y);
    cout<<"After swapping"<<endl;
    cout<<"number1="<<x<<endl<<"number2="<<y<<endl;
        return 0;
}
