#include<iostream>
using namespace std;
int main()
{
    int Count=0;
    char ch;
    cout<<"Enter Text"<<endl;
    while(ch!='\n')
    {
        cin.get(ch);
        cout.put(ch);
        Count++;
        cout<<Count<<endl;
    }
    cout<<"Number of Character is "<<(Count-1);
    return 0;
}
