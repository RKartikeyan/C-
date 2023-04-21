#include<iostream>
using namespace std;
class a
{
protected:
    int roll;
public:
    void getdata()
    {
        cout<<"Enter the students roll number";
        cin>>roll;
    }
    void putdata()
    {
        cout<<"the students roll number is="<<roll;
    }
};
class b:public a
{
protected:
    int a,b;
public:
    void getmarks()
    {
        cout<<"Enter the marks of subject 1=";
        cin>>a;
        cout<<"Enter the marks of subject 2=";
        cin>>b;
    }
    void putmarks()
    {
        cout<<"the marks of subject 1 is="<<a;
        cout<<"the marks of subject 2 is="<<b;
    }

};
class c:public b
{
    int c;
public:
    void input()
    {
        putdata();
        putmarks();
        cout<<"The sum of 2 marks="<<a+b;

    }
};
int main()
{
    c aa;
    aa.getdata();
    aa.getmarks();
    aa.input();
    return 0;
}
