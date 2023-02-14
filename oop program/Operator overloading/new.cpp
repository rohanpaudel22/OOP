#include <iostream>

using namespace std;

class Rectangle {
    float width, height;

public:
    Rectangle(float width, float height) : width(width), height(height) {}
    operator float() 
     {
        return width * height;
    }
};

class Circle {
    float radius;

public:
    Circle(float radius) : radius(radius) {}
    operator float() {

        return 3.14159265 * radius * radius;
    }
};

int main() {
    Rectangle r(10, 20);
    Circle c(15);

    float areaOfRectangle = r;
    float areaOfCircle = c;

    cout << "Area of Rectangle: " << areaOfRectangle << endl;
    cout << "Area of Circle: " << areaOfCircle << endl;

    return 0;
}