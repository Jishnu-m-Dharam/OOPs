// Print all prime numbers between 1 and 100.

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    

    for(int i=2;i<=100;i++){
        bool isprime=true;

        if(i==2){
            cout<<i;
        }

        for(int j=2;j<=(i/2);j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }

        if (isprime==true){
            cout<<i<<endl;

        }
        
        
    }

    return 0;
}