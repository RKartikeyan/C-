#include<iostream>
using namespace std;
class time
{int a,b;
public:
    void getdata();
    void putdata();
    void sum(time t1,time t2);

};
void time::getdata()
{
    cout<<"enter the time in hours and minutes";
    cin>>a>>b;
}
void time::putdata()
{
    cout<<"\nhours"<<a;
    cout<<"\tminutes"<<b;
}
void time::sum(time t1,time t2)
{
    a=(t1.b+t2.b)/60;
    b=(t1.b+t2.b)%60;
    a=a+(t1.a+t2.a);

}
int main()
{
    time t1,t2,t3;
    t1.getdata();t2.getdata();
    t3.sum(t1,t2);
    t1.putdata();t2.putdata();t3.putdata();
    return 0;
}

