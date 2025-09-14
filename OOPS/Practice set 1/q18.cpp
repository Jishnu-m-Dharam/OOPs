#include<iostream>
using namespace std;
int main(){
    int num[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"enter the "<< i+1<<" digit:";
        cin>>num[i];
    }
    
    if (num[2]==num[0])
       {
        cout<<"the number is a palindrome";
       }

       else{
        cout<<"the number isnt a palindrome";
       }
    return 0;
    
}