#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    Test()
    {
        cout<<"This is default constructor"<<endl;
    }
    ~Test()
    {
        cout<<"this is Destructor"<<endl;
    }
};
int main()
{
    Test *t = new Test();
    delete (t);
      return 0;
}
