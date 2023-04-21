#include<iostream>
using namespace std;
class demo
{
    int a;
    int b;
public:
    demo(int m, int n)
    {
        a=m;
        b=n;
    }
    void putdata();

};
void demo::putdata()
{
    cout<<"\na"<<a;
    cout<<"\nb"<<b;
}
int main()
{
    demo aa(8,1);
    aa.putdata();
    return 0;
}

