// Write a program to calculate the power of a number (a^b) using a while loop.

#include <iostream>
using namespace std;

int main(){

    int a;
    int b;

    cout<<"enter a number :";
    cin>>a;
    cout<<"enter the power to raise the nunber by :";
    cin>>b;

    int answer=1;

    while(b!=0){
        answer = answer * a;
        b--;

    }

    cout<<answer;


    return 0;
}