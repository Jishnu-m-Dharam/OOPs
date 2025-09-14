// Print the first 10 even numbers using a while loop.

#include <iostream>
using namespace std;

int main(){

    int count=1;
    int i=0;
    while(count<=10){
        

        if(i%2==0){
            cout<<i<<endl;
            count++;
        }
        i++;
        


    }

   

    return 0;
}