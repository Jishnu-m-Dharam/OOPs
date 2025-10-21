#include <iostream>
using namespace std;

class Shape {
public:
    double length, width;
    void getData(double l, double w) {
        length = l;
        width = w;
    }
};

class Rectangle : public Shape {
public:
    double area() { return length * width; }
    double perimeter() { return 2 * (length + width); }
};

int main() {
    Rectangle r;
    r.getData(5, 3);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}
