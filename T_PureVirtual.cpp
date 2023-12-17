#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0;
};
class Derived : public Base
{
    void show()
    {
        cout << "Derived Class";
    }
};
int main(int argc, char const *argv[])
{
    Base *b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}
