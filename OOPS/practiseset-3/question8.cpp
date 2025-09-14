/*Create a class Account with private members accountNumber and
balance. Provide setter and getter methods. In main(), ensure that
account details can only be accessed through these methods.*/
#include<iostream>
using namespace std;
class acc
{
private:
    int accnum;
    int balance;

public:
      void setaccnum(int n){
        accnum=n;
      }
      void setbalance(int b){
        balance=b;
      }
      int getaccnum(){
        return accnum;
      }
      int getbalance(){
        return balance;
      }
};
int main(

){
    acc a;
    a.setaccnum(5641);
    a.setbalance(90);
    cout<<"the acc num is:"<<a.getaccnum()<<"\nthe balance remaining is:"<<a.getbalance();
    return 0;
}
