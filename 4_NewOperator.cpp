#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int *ptr = new int;
    *ptr = 25;
    cout << *ptr;
    return 0;
}
