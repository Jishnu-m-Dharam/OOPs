// Write a program to find the GCD (Greatest Common Divisor) of two numbers using a while loop.

#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"enter two numbers:";
    cin>>a>>b;

    int i=1;
    int GCD;

    while(i!=min(a,b)){  // or while (i <= min(a,b))

        if(a%i==0 && b%i==0){
            GCD = i;
        }
        i++;


    }

    cout<<GCD;  

    return 0;
}