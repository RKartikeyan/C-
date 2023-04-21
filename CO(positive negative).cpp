#include<iostream>
using namespace std;
class posinega
{int a;
public:
    void getdata();
    void putdata();
};
void posinega::getdata()
{
    cout<<"enter the number to check POS or NEG";
    cin>>a;
}
void posinega::putdata()
{
    if(a>0)
        cout<<"POSITIVE";
    else
        cout<<"NEGATIVE";
}
int main()
{
    posinega aa;
    aa.getdata();
    aa.putdata();
    return 0;
}

