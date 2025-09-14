// Take a number as input and check if it is an Armstrong number using a while loop.


#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int num;

    cout<<"enter a number :";
    cin>>num;

    int original=num;
    
    int no_of_digits=0;

    // first find the number of digits

    int temp = num;

    while(temp != 0){

        no_of_digits++;
        temp = temp/10;
        
    }

    // now find the sum of the digits, again store num in temp cause the while loop will make num 0
    // ALWAYSSSS INITIALISE SUM TO 0 OR ITLL HAVE GARBAGE VALUE AND GIVES WRONG ANS
    
    int sum=0;
    temp = num;

    while(temp != 0){

        int digit = temp % 10;
        sum = sum + pow(digit,no_of_digits);
        temp = temp /10;       // to remove the last digits of the number 
        
    }

    if(original==sum){
        cout<<"armstrong number";
    }

    else{
        cout<<"not armstrong";
    }



    return 0;
}