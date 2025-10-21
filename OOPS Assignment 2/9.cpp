#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;
public:
    BankAccount(string n, double b) : name(n), balance(b) {}
    void deposit(double amt) { balance += amt; }
    void withdraw(double amt) {
        if (amt <= balance) balance -= amt;
        else cout << "Insufficient funds!" << endl;
    }
    void display() { cout << name << " Balance: " << balance << endl; }
};

int main() {
    BankAccount b("Alice", 5000);
    b.deposit(1000);
    b.withdraw(700);
    b.display();
    return 0;
}
