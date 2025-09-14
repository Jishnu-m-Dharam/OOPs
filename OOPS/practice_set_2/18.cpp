// Print the Fibonacci sequence up to N terms using a for loop.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter n for the sequence:";
    cin>>n;

    int n1=0;
    int n2=1;
    int n3;

    cout<<n1<<"\t";
    cout<<n2<<"\t";

    
    for (int i=0 ; i<=n;i++){

        n3 = n1+n2;
        cout<<n3<<"\t";
        n1=n2;
        n2=n3;

    }




    return 0;
}