/* 9. Write a program that keeps asking the user for input until they enter
 a negative number (do-while loop). */

#include <iostream>
using namespace std;

int main(){

    
    
    int n;
    cout<<"enter a number :";
    cin>>n;
    

    do
    {
        cout<<"number entered was :"<<n<<endl;
        cout<<"enter a new number :";
        cin>>n;
        

        if(n<0){

            cout<<"number is -ve so stop";
        }
    } while (n >= 0);

    
    
    


   



    return 0;
}