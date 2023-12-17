#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, n;
    bool is_Prime = true;
    cout << "Enter a positive integer : ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        is_Prime = false;
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            is_Prime = false;
            break;
        }
    }
    if (is_Prime)
    {
        cout << n << " is PRIME";
    }
    else
    {
        cout << n << " is NOT PRIME";
    }
    return 0;
}
