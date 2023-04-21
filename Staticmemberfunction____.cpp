#include<iostream>
using namespace std;
class demo{
int a,b;
static int k;
public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
        k=k+1;
    }
    void putdata()
    {
        cout<<"\na"<<a;
        cout<<"\nb"<<b;
        cout<<"\nk"<<k;
    }
    static void kar()
    {
        cout<<"k"<<k;
    }
};
int demo::k;

int main()
{
    demo aa;
    aa.getdata(5,9);
    aa.putdata();
    demo::kar();
    return 0;
}
