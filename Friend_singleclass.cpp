#include<iostream>
using namespace std;
class fifa
{
private:
    int a,b;
public:
    void getdata()
    {
    cout<<"enter 2 numbers";
    cin>>a>>b;
}
    friend int sum(fifa);
};
int sum(fifa aa)
{
    return(aa.a+aa.b);
}
int main()
{
    fifa aa;
    aa.getdata();
    cout<<"the sum is:"<<sum(aa);
    return 0;
}
