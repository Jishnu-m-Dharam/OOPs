// Write a program to find the largest digit in a number using a do-while loop.

#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"enter a number:";
    cin>>n;
    int largest=0;

    ;

    do
    {
        int digit = n % 10;

        if(digit>largest){
            largest = digit;
        
        }

        n = n / 10;  //


    } while (n != 0);
    
    cout<<largest;


    return 0;
}