#include <iostream>
using namespace std;

class Sports;

class Student {
    int marks;
public:
    Student(int m) : marks(m) {}
    friend void totalPerformance(Student, Sports);
};

class Sports {
    int score;
public:
    Sports(int s) : score(s) {}
    friend void totalPerformance(Student, Sports);
};

void totalPerformance(Student s, Sports sp) {
    cout << "Total Performance: " << (s.marks + sp.score) << endl;
}

int main() {
    Student st(80);
    Sports sp(20);
    totalPerformance(st, sp);
    return 0;
}
