#include<iostream>
using namespace std;
class a
{
protected:
    int x;
public:
    void input()
    {
        cout<<"Enter the first number=";
        cin>>x;
    }
};
class b
{
protected:
    int y;
public:
    void getdata()
    {
        cout<<"Enter the second number";
        cin>>y;
    }
};
class c:public a,public b
{
public:
    void putdata()
    {
        cout<<x+y;
    }
};
int main()
{c aa;
aa.input();
aa.getdata();
aa.putdata();
return 0;
}
