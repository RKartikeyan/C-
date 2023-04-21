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
class b:public a
{
    int y;
public:
    void getdata()
    {
        cout<<"enter the second number";
        cin>>y;
    }
    void putdata()
    {
        cout<<"The sum of the 2 numbers is="<<x+y;
    }
};
int main()
{
    b aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;

}
