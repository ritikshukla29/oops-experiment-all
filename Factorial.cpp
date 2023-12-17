#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    long factorial = 1;
    cout << "Enter a positive integer : ";
    cin >> n;
    if (n < 0)
    {
        cout << "Error! Factorial of negative number doesn't exists";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        cout << "Factorial of " << n << " is : " << factorial;
    }
    return 0;
}
