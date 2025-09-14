// Write a program to find the factorial of a number using a while loop.

#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter a number to find the factorial :";
    cin>>num;
    int i=num;
    int ans=1;

    while(i != 1){
        ans = ans * i;
        i--;
    }

    cout<<"the factorial is : "<<ans;


    return 0;
}