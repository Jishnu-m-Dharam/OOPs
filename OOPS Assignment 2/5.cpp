#include <iostream>
using namespace std;

class Person {
public:
    void show() { cout << "I am a Person" << endl; }
};

class Athlete {
public:
    void show() { cout << "I am an Athlete" << endl; }
};

class SportsPerson : public Person, public Athlete {
public:
    void display() {
        Person::show(); 
        Athlete::show();
    }
};

int main() {
    SportsPerson sp;
    sp.display();
    return 0;
}
