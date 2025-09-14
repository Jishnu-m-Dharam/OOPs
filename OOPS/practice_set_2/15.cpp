/*
Print a simple pattern using loops:
*
**
***
****
*****

*/
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter number of rows for the pattern:";
    cin>>n;

    

    for(int i=1;i<=n;i++){

        // int count=1;

        for(int j = 1 ; j<=i ; j++){

            cout<<"*";
            //cout<<count<<"\t";
            //count++;
        }
        // after finishing the stars for a row move to next row
        cout<<endl;
    }


    return 0;
}