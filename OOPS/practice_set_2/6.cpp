// Print the digits of a number in reverse order using a do-while loop.

#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter a number to reverse :";
    cin>>num;
    int digit;
    int reverse=0;
    
    do
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;

        
    } while (num != 0);
    
    cout<<reverse;
    
    /* easier method
    do
    {
        digit = num % 10;
        cout<<digit;
        num = num / 10;
        
    } while (num != 0);
     
    */


    return 0;
}