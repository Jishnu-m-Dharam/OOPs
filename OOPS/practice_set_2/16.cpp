// 16. Use a for loop to check if a number is a palindrome.

#include <iostream>
using namespace std;

int main(){

    int num;

    cout<<"enter a number:";
    cin>>num;

    int temp = num;
    int reversed=0;

    for(int n=0; temp != 0 ;n++){

        int digit = temp % 10;
        reversed = reversed * 10 +digit;
        temp = temp /10;

    }

    if(num==reversed){
        cout<<"yes its a palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
 


    return 0;
}