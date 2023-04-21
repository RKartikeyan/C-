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
        cout<<"value="<<a;
    }
    bool operator==(A bb)
    {

    if(a==bb.a)
        return true;
    else
        return false;
    }
};
int main(){
A aa,bb;
aa.getdata();
bb.getdata();
if(aa==bb)
cout<<"yes";
else
cout<<"no";
return 0;
}
