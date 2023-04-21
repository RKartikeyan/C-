#include<iostream>
using namespace std;
class a{
public:
    void kartikeyan()
    {
        cout<<"\nPucchu";
    }
};
class b:public a{
public:
    void kartikeyan()
    {
        cout<<"\ngucchu";
    }
};
int main(){
b aa;
aa.kartikeyan();
aa.a::kartikeyan();
return 0;
}
