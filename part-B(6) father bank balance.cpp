#include<iostream>
using namespace std;
class FATHER
{
public:
    string Surname;
    double Bank_Balance;
    FATHER(string st, double bb)
    {
        Surname=st;
        Bank_Balance=bb;
    }
    void Father_info_Disp()
    {
        cout<<"Surname of father=  "<<Surname<<endl;
        cout<<"Bank Balance of Father=  "<<Bank_Balance<<endl;
    }
};
class SON: public FATHER
{
    public:
    string FirstName;
    string DOB;
    SON(string fname, string dob, string fathername, double bankbalance):FATHER(fathername,bankbalance)
    {
        FirstName=fname;
        DOB=dob;
    }
    void SON_info_Disp()
    {
        cout<<"Son of Name=  "<<FirstName<<" "<<Surname<<endl;
        cout<<"Son Date of Birth=  "<<DOB<<endl;
    }
};
int main()
{
    string father_name,son_name,dob;
    double bb;
    cout<<"Enter Father Surname"<<endl;
    cin>>father_name;
    cout<<"Enter bank balance of Father"<<endl;
    cin>>bb;
    cout<<"Enter son name"<<endl;
    cin>>son_name;
    cout<<"Enter age of son this formate(dd/mmm/yyyy)Eg(26/Dec/1995)"<<endl;
    cin>>dob;
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    SON s1(son_name,dob,father_name,bb);
    s1.Father_info_Disp();
    s1.SON_info_Disp();
    return 0;
}
