#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    if (n==1)
    {
        cout<<"the number isnt prime"<<endl;
        return 0;
    }
    for (int i = 2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            cout<<"the number isnt prime";
        }
        
    }
    
    cout<<"the number is prime";
    return 0;

}