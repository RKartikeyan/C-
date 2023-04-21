#include<iostream>
using namespace std;
class kartik
{
    int a,b;
public:
    void getdata()
    {
        cout<<"enter the real value of a=";
        cin>>a;
        cout<<"enter the imaginary value of a=";
        cin>>b;


    }
    void putdata()
    {
        cout<<"the real value ="<<a;
        cout<<"the imag value ="<<b;
    }
    kartik operator+(kartik bb)
    {
        kartik cc;
        cc.a=a+bb.a;
        cc.b=a+bb.b;
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
