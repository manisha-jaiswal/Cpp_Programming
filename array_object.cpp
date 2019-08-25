#include<iostream>
using namespace std;
class student
{
    int usn,m1,m2,m3;
    float tot_mark=0;
    string stname;
public:
    void add_info()
    {
        cout<<"Enter the USN No"<<endl;
        cin>>usn;
        cout<<"Enter Student name"<<endl;
       cin>>stname;
    }
    void show_info()
    {
        cout<<"USN No:- "<<usn<<endl;
        cout<<"Student Name:- "<<stname<<endl;
        cout<<"Total Marks "<<tot_mark;
    }
    void mark()
    {
        cout<<"Enter three internal marks  "<<endl;
        cin>>m1>>m2>>m3;
        tot_mark=((m1+m2+m3)/3);
       // cout<<"Total Marks "<<tot_mark;
    }
};
int main()
{
    /*student obj;
    student *p_obj;
    p_obj=&obj;
    p_obj->mark();
    (*p_obj).mark();*/
    student st[2];
    for(int i=0; i<2; i++)
    {
        st[i].add_info();
        st[i].mark();
    }
    for(int i=0; i<2; i++)
    {
        st[i].show_info();
        st[i].mark();
    }
    return 0;
}
