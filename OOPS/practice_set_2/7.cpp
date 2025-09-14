// Check whether a number is prime or not using a for loop.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number to check for prime :";
    cin>>n;
    bool isprime=true;

    for(int i=2;i<n/2;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
        
    }

    if(n==1){
        cout<<"neither prime nor comopsite";
    }
    if(n==2){
        cout<<"2 is prime";
    }

    if (isprime){
        cout<<n<<" is prime";
    }
    else{
        cout<<"not prime";
    }


    return 0;
}