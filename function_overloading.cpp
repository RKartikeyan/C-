#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<a+b;
}
void add(int a,double b)
{
    cout<<"\n"<<a+b;
}
void add(int a,int b,int c)
{
    cout<<"\n"<<a+b+c;
}
int main()
{
    add(10,20);
    add(20,25.99);
    add(10,20,50);
    return 0;
}
