#include<iostream>
using namespace std;
int main()
{
    int num,i,b,counter;
    i=1;
    b=1;
    counter=0;
    cout<<"Enter any number"<<endl;
    cin>>num;
    while(num>1)
    {
     while(num>=i)
    {
        if(num%i==0)
        {
            counter++;
        }
        i++;
    }
    if(counter==2)
    {
        cout<<"Given number is prime"<<num<<endl;
    }
    else
    {
        cout<<"Given number is not prime"<<num<<endl;
    }
     num--;
    return 0;
    }
}
