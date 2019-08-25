#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name,usn_no;
    ofstream outf("data.doc");
    cout<<"Enter name of Student"<<endl;
    cin>>name;
    cout<<"Enter usn number"<<endl;
    cin>>usn_no;
    outf<<name<<endl;
    outf<<usn_no<<endl;
    outf.close();
    ifstream inf("data.doc");
    inf>>name;
    inf>>usn_no;
    cout<<"Student name:-"<<name<<endl;
    cout<<"Student usn number:-"<<usn_no<<endl;
    inf.close();
    return 0;
}
