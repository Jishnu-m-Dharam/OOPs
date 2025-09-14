// Find the sum of the first N natural numbers (input N) using a for loop.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter value for n :";
    cin>>n;

    int sum=0;

    for(int i =1;i<=n;i++){
        sum = sum + i;
    }
    
    cout<<sum;



    return 0;
}