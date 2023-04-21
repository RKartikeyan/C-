#include<iostream>
using namespace std;
class kartik
{
    int a;
public:
    void getdata()
    {
        cout<<"enter the value of a=";
        cin>>a;
    }
    void putdata()
    {
        cout<<"the value of a="<<a;
    }
    kartik operator+(kartik bb)
    {
        kartik cc;
        cc.a=a+bb.a;
        return cc;
    }
};
int main()
{
    kartik aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;


}
