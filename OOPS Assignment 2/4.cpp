#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n) { name = n; }
};

class Employee : public Person {
protected:
    int empID;
public:
    void setEmpID(int id) { empID = id; }
};

class Manager : public Employee {
    double salary;
public:
    void setSalary(double s) { salary = s; }
    void display() {
        cout << "Manager: " << name << ", ID: " << empID << ", Salary: " << salary << endl;
    }
};

int main() {
    Manager m;
    m.setName("Alice");
    m.setEmpID(101);
    m.setSalary(75000);
    m.display();
    return 0;
}
