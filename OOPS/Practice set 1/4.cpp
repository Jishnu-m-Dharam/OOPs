#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    cout<<"Enter first number: "<<endl;
    cin>>a;

    cout<<"Enter second number: "<<endl;
    cin>>b;

    cout<<"Enter third number: "<<endl;
    cin>>c;

    if(a>=b && a>=c){
        cout<<"The first number is the greatest number: "<<endl;
    }
    else if(b>=a && b>=c){
        cout<<"The second number is the greatest number: "<<endl;
    }
    else{
        cout<<"The third number is the greatest number: "<<endl;
    }












  return 0;  
}