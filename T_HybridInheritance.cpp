#include <iostream>
using namespace std;
class A
{
public:
    int x;
};
class B : public A
{
public:
    B() // Constructor
    {
        x = 10;
    }
};
class C
{
public:
    int y;
    C()
    {
        y = 4;
    }
};
class D : public B, public C
{
public:
    void sum()
    {
        cout << "Sum : " << x + y;
    }
};
int main(int argc, char const *argv[])
{
    D obj;
    obj.sum();
    return 0;
}
