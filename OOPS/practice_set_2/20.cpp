/* 

Write a program to keep taking marks as input until the user enters
−1, then print the average of the entered marks.

*/

#include <iostream>
using namespace std;

int main(){

    int mark=0;
    int count=0;
    float sum=0;

    // dont put count above the if condition or itll make the count wrong,always increment 
    // count in the last step 
    while(true){
        cout<<"enter marks:";
        cin>>mark;

        if(mark == -1){
            break;
        }

        sum = sum + mark;
        count++;

    }

    float avg = sum/count;
    cout<<avg;


    return 0;
}