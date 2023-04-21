#include<iostream>
using namespace std;
class rev
{int a;
public:
    void getdata();
    void putdata();
};
void rev::getdata()
{
    cout<<"enter the number to REVERSE";
    cin>>a;
}
void rev::putdata()
{
    int b=0;
    while(a>0)
    {
        b=(b*10)+(a%10);
        a=a/10;

    }
cout<<"After reversing"<<b;
}



int main()
{
    rev aa;
    aa.getdata();
    aa.putdata();
    return 0;
}

