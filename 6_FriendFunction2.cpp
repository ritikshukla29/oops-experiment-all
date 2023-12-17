#include <iostream>
using namespace std;
class A
{
    int x = 6;
    friend class B;
};
class B
{
public:
    void display(A &a)
    {
        cout << "Value of x is : " << a.x;
    }
};
int main(int argc, char const *argv[])
{
    A a;
    B b;
    b.display(a);
    return 0;
}
