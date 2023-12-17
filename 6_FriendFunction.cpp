#include <iostream>
using namespace std;
class B; // Forward Declaration
class A
{
    int x;

public:
    void setdata(int i)
    {
        x = i;
    }
    friend void min(A, B);
};
class B
{
    int y;

public:
    void setdata(int i)
    {
        y = i;
    }
    friend void min(A, B);
};
void min(A a, B b)
{
    if (a.x <= b.y)
    {
        cout << a.x << endl;
    }
    else
    {
        cout << b.y << endl;
    }
}

int main(int argc, char const *argv[])
{
    A a;
    B b;
    a.setdata(25);
    a.setdata(22);
    min(a, b);
    return 0;
}
