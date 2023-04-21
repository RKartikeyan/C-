#include<iostream>
using namespace std;
class A{
protected:
    int a;
public:
    A (int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"a="<<a;
    }
};
class B
{
protected:
    int b;
public:
    B (int y)
    {
        b=y;
    }
    void show()
    {
        cout<<"b="<<b;
    }
};
class C:public A,public B
{
    int c;
public:
    C (int p,int q,int r):A(p),B(q)
    {
        c=r;
    }
    void putdata()
    {
        cout<<"c="<<c;
    }
};
int main()
{C aa(10,20,30);
aa.display();
aa.show();
aa.putdata();
return 0;
}
