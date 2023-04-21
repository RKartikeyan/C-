#include<iostream>
using namespace std;
class demo
{
    int a;
    int b;
public:
    demo()
    {
        cout<<"enter the value of a";
        cin>>a;
        cout<<"enter the value of b";
        cin>>b;
    }
    void putdata();

};
void demo::putdata()
{
    cout<<"The value of a"<<a;
    cout<<"the value of b"<<b;
}
int main()
{
    demo aa;
    aa.putdata();
    return 0;
}
