#include<iostream>
using namespace std;
class A
{
    int a;
public:
    void getdata()
    {
        cout<<"enter the value of a";
        cin>>a;
    }
    void putdata()
    {
        cout<<"the value of a is"<<a;
    }
    void operator++(int)
    {
        a=a+1;
    }
};
int main(){
A aa;
aa.getdata();
cout<<"original value =";
aa.putdata();
aa++;
cout<<"after incrementing";
aa.putdata();
return 0;
}
