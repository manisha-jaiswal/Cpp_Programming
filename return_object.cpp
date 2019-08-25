#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    void get_input(int x,int y)
    {
        a=x;
        b=y;
    }
  friend Test Sum(Test t1,Test t2);
  void disp()
  {
      cout<<"value of a="<<a<<endl;
      cout<<"value of b="<<b<<endl;
  }
};
 Test Sum(Test t1,Test t2)
    {
        Test temp;
        temp.a=t1.a+t2.a;
        temp.b=t1.b+t2.b;
        return temp;
    }
int main()
{
    Test obj1,obj2,obj3;
    obj1.get_input(2,5);
    obj2.get_input(6,5);
    obj1.disp();
    obj2.disp();
    obj3=Sum(obj1,obj2);
    obj3.disp();
    return 0;
}
