#include<iostream>
using namespace std;
class STUDENT
{
    public:
    string USN,name;
    float mark1,mark2,mark3,str_m1,str_m2,aver;
    void input_data()
    {
        cout<<"Enter USN No."<<endl;
        cin>>USN;
        cout<<"Enter Student Name"<<endl;
        cin>>name;
        cout<<"Enter Three test marks"<<endl;
        cin>>mark1>>mark2>>mark3;
    }
    void best_of_two()
    {
        if(mark1>=mark2 && mark1>=mark3)
        {
            str_m1=mark1;
           if(mark2>=mark3)
           {
               str_m2=mark2;
               aver=(mark1+mark2)/2.0;
               show_info();
           }
           else
           {
               str_m2=mark3;
               aver=(mark1+mark3)/2.0;
               show_info();
           }
        }
        else if(mark2>=mark1 && mark2>=mark3)
        {
            str_m1=mark2;
            if(mark1>=mark3)
            {
                str_m2=mark1;
                aver=(mark2+mark1)/2.0;
                show_info();
            }
            else
            {
                str_m2=mark3;
                aver=(mark2+mark3)/2.0;
                show_info();
            }
        }
        else if(mark3>=mark1 && mark3>=mark2)
        {
            str_m1=mark3;
            if(mark1>=mark2)
            {
                str_m2=mark1;
                aver=(mark3+mark1)/2.0;
                show_info();
            }
            else
            {
                str_m2=mark2;
                aver=(mark3+mark2)/2.0;
                show_info();
            }
        }
    }
     void show_info()
    {

        cout<<"USN No:- "<<USN<<endl;
        cout<<"Student Name:- "<<name<<endl;
        cout<<"Best of first mark:- "<<str_m1<<endl;
        cout<<"Best of second mark:- "<<str_m2<<endl;
        cout<<"Average of two Better marks:-"<<aver<<endl;
    }
};
int main()
{
    STUDENT st[10];
    for(int i=0; i<10; i++)
    {
        st[i].input_data();
    }
     for(int i=0; i<10; i++)
    {
        st[i].best_of_two();
    }
    return 0;
}
