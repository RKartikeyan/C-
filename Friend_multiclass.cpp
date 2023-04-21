#include<iostream>
using namespace std;
class B;
class A
{
    int a;
public:
    void input()
    {
        cout<<"enter the value of a"<<a;
    }
    friend void max(A,B);

};
class B
{
    int b;
public:
    void getdata()
    {
        cout<<"enter the value of b"<<b;
    }
    friend void max(A,B);
};
void max(A aa,B bb)
{
    if(aa.a>bb.b)
        cout<<aa.a;
    else
        cout<<bb.b;

}
int main()
{
    class A aa;
    class B bb;
    aa.input();
    bb.getdata();
    max(aa,bb);
    return 0;
}
