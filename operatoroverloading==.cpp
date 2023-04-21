#include<iostream>
using namespace std;
class A
{
    int a;
public:
    void getdata()
    {
        cout<<"value";
        cin>>a;
    }
    void putdata()
    {
        cout<<"a="<<a;
    }
    void operator+=(A bb)
    {
        a=a+bb.a;
    }
};
int main()
{
    A aa,bb;
    aa.getdata();
    bb.getdata();
    aa+=bb;
    aa.putdata();
    return 0;
}
