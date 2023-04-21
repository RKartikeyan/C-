#include<iostream>
using namespace std;
class oddeven
{private:
    int a;
public:
    void getdata();
    void putdata();
};
void oddeven::getdata()
{
    cout<<"enter a number";
    cin>>a;
}
void oddeven::putdata()
{
    if(a%2==0)
        cout<<"even";
    else
        cout<<"odd";
}
int main()
{
    oddeven aa;
    aa.getdata();
    aa.putdata();
    return 0;
}
