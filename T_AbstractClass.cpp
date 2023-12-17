#include <iostream>
using namespace std;
class Shape
{
protected:
    int width;
    int height;

public:
    virtual int getarea() = 0;
    void setwidth(int w)
    {
        width = w;
    }
    void setheight(int h)
    {
        height = h;
    }
};
class Rectangle : public Shape
{
public:
    int getarea()
    {
        return width * height;
    }
};
int main(int argc, char const *argv[])
{
    Rectangle r;
    r.setwidth(4);
    r.setheight(2);
    cout << "Area of Rectangle is " << r.getarea();
    return 0;
}
