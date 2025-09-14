// Print the multiplication table of a given number using a do-while loop.

#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter a number to find the tables:";
    cin>>num;
    int i=1;

    do
    {
        cout<< num * i<<endl; 
        i++;
    } while (i<=10);
    


    return 0;
}