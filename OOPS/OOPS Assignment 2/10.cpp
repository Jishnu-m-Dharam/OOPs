#include <iostream>
using namespace std;


class Shape {
public:
    virtual void area() = 0;
};


class Circle : public Shape {
public:
    void area() override {
        cout << "Calculating area of Circle..." << endl;
    }
};

class Square : public Shape {
public:
    void area() override {
        cout << "Calculating area of Square..." << endl;
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    s1->area();
    s2->area();

    delete s1;
    delete s2;
    return 0;
}
