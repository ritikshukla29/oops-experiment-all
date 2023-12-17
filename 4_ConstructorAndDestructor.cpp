#include <iostream>
using namespace std;
class Box
{
public:
    Box()
    {
        cout << "Constructor Called!!" << endl;
    }
    ~Box()
    {
        cout << "Destructor Called!!" << endl;
    }
};
int main(int argc, char const *argv[])
{
    Box *myBoxArray = new Box[4];
    delete[] myBoxArray;
    return 0;
}
