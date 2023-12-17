#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int f = 0, s = 1, next, n, i = 1;
    cout << "Enter the number of terms : ";
    cin >> n;
    cout << "Fibonacci Series is : ";
    while (i <= n)
    {
        cout << f << " ";
        next = f + s;
        f = s;
        s = next;
        i++;
    }
    return 0;
}
