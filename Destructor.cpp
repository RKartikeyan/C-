#include<iostream>
using namespace std;
int count=0;
class demo
{
public:
demo()
{
    cout<<"\n NO of objects created:"<<count;
    count++;
}
~demo()
{
    cout<<"\n NO of objects destroyed:"<<count;
    count--;
}
};
int main()
{
    demo aa,bb,cc;
    {
        demo dd;
    }
    return 0;
}
