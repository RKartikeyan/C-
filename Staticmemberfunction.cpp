#include<iostream>
using namespace std;
class demo{
    int a,b;
    static int z;
public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
        z=z+1;
    }
    void putdata()
    {
        cout<<"\na"<<a;
        cout<<"\nb"<<b;
        cout<<"\nz"<<z;
    }
};
int demo::z;
int main()
{
    demo aa,bb;
    aa.getdata(1,2);
    bb.getdata(6,1);
    aa.putdata();
    bb.putdata();
    return 0;
}
