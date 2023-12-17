#include<iostream>
using namespace std;
class A
{
    public:
    int x=5;
    /*
    virtual*/ void display()
    {
        cout<<"Value of x"<<endl;
    }
};
class B:public A
{
    public:
    int y=10;
    void display()
    {
        cout<<"Value of y";
    }
};
int main(int argc, char const *argv[])
{
    A *a;
    B b;
    a=&b;
    a->display();
    return 0;
}
