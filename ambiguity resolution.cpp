#include<iostream>
using namespace std;
class A{
protected:
    int a;
public:
    void input()
    {
        cout<<"enter the value of a";
        cin>>a;
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
    void input()
    {
        cout<<"enter the value of b";
        cin>>b;
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
    void input()
    {
        cout<<"enter the value of c";
        cin>>c;
        A::input();
        B::input();
    }
    void putdata()
    {
        cout<<"c="<<c;
    }
};
int main()
{C aa ;
aa.input();
aa.display();
aa.show();
aa.putdata();
return 0;
}
