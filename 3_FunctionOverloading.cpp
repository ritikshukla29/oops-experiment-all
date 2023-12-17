#include <iostream>
using namespace std;
class PrintData
{
public:
    void print(int i)
    {
        cout << "Printing int : " << i << endl;
    }
    void print(double f)
    {
        cout << "Printing double : " << f << endl;
    }
    void print(char *c)
    {
        cout << "Printing character : " << c << endl;
    }
};
int main(int argc, char const *argv[])
{
    PrintData pd;
    pd.print(45);
    pd.print(9571.5964);
    pd.print("Rohit");
    return 0;
}
