#include<iostream>
using namespace std;
class a
{
public:
    virtual void show()
    {
        cout<<"Base class";
    }
};
class b:public a
{
public:
    void show()
    {
        cout<<"derived class";
    }
};
int main(){
a *bptr;
b aa;
bptr=&aa;
bptr->show();
return 0;
}
