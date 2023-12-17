#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *ptr = new int;
    *ptr = 71;
    cout << *ptr;
    delete ptr;
    return 0;
}
