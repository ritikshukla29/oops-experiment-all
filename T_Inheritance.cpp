#include <iostream>
using namespace std;
class A
{
public:
    int x, y;
    void getdata()
    {
        cout << "Enter value : ";
        cin >> x >> y;
    }
};
class B : public A
{
public:
    void product()
    {
        cout << "Product : " << x * y << endl;
    }
};
class C : public A
{
public:
    void sub()
    {
        cout << "Sub : " << x - y << endl;
    }
};
int main(int argc, char const *argv[])
{
    B b1;
    C c1;
    b1.getdata();
    b1.product();
    c1.getdata();
    c1.sub();
    return 0;
}
