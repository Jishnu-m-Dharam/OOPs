/*

Use if-else with a loop: Print “Fizz” if a number is divisible by
3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both (for
numbers 1 to 50).

*/

#include <iostream>
using namespace std;

int main(){

    int n;

    while(1){
        cout<<"enter a number:";
        cin>>n;

        if(n%3==0){
            cout<<"fizz"<<endl;

        }

        if(n%5==0){
            cout<<"buzz"<<endl;
            
        }

        if(n%3==0 && n%5==0){
            cout<<"fizzbuzz"<<endl;
            
        }

       
    }
   
    return 0;
}