#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cout<<"Enter your Name"<<endl;
    cin.getline(name,15);
    cout.write(name,10);
    return 0;
}
