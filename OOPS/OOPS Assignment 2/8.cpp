#include <iostream>
using namespace std;

class MathOps {
public:
    int add(int a, int b) { return a + b; }          
    double add(double a, double b) { return a + b; } 
    virtual void show() { cout << "Base class" << endl; }
};

class AdvancedMath : public MathOps {
public:
    void show() override { cout << "Derived class" << endl; }
};

int main() {
    MathOps m;
    cout << m.add(2, 3) << endl;
    cout << m.add(2.5, 3.1) << endl;

    MathOps *ptr = new AdvancedMath();
    ptr->show();
    return 0;
}
