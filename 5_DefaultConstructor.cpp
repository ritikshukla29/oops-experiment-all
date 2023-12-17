#include <iostream>
using namespace std;
class Employee
{
public:
    Employee()
    {
        cout << "Default Constructor Invoked!";
    }
};
int main(int argc, char const *argv[])
{
    Employee e1;
    Employee e2;
    return 0;
}
