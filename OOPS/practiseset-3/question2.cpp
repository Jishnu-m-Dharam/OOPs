/*Define a class BankAccount with a private member balance. Provide
methods setBalance() and getBalance() to update and view the
balance. Ensure that negative values cannot be assigned.*/
#include<iostream>
using namespace std;
class bankacc{
private:
int balance;
public:
void setbalance(int b){
   if (b >= 0) {
            balance = b;
        } else {
            cout << "Error: Balance cannot be negative!" << endl;
            balance = 0; // default to 0 if invalid
        }

}
int getbal(){
    return balance;
}
};
int main(){
    bankacc b1;
    b1.setbalance(1235);
    b1.setbalance(-1235);
    return 0;
}