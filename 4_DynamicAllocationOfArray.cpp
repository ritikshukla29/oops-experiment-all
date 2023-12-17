#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int length, sum = 0;
    cout << "Enter the no. of students in the group : ";
    cin >> length;
    int *marks = new int[length];
    cout << "Enter the marks of "<<length<<" students : ";
    for (int i = 0; i < length; i++)
    {
        cin >> *(marks + i);
    }
    for (int i = 0; i < length; i++)
    {
        sum += *(marks + i);
    }
    cout << "Sum of marks is : " << sum;
    return 0;
}
