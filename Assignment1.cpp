#include <iostream>
using namespace std;

class Rectangle
{
    int width;
    int height;

public:
    Rectangle();
    Rectangle(int w, int h);

    int square();
    void show();
    void setWidth(int w);
    void setHeight(int h);
};

Rectangle::Rectangle() : Rectangle(1, 1) {}

Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}

int Rectangle::square()
{
    return width * height;
}

void Rectangle::setWidth(int w)
{
    width = w;
}

void Rectangle::setHeight(int h)
{
    height = h;
}

void Rectangle::show()
{
    cout << "크기가 " << square() << "인 사각형" << endl;
}

int main()
{
    Rectangle first(3, 4);
    Rectangle second(5, 5);
    Rectangle third;

    first.show();
    second.show();
    third.show();

    third.setWidth(3);
    third.setHeight(7);

    cout << "third의 면적은" << third.square() << endl;
}