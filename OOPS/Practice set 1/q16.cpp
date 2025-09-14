#include<iostream>
using namespace std;
int main(){
    int digits[3];
    for (int i = 0; i <3; i++)
    {
        cout<<"enter the digits:"<<i+1<<endl;
        cin>>digits[i];
    }
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        
        sum+=digits[i];
        
        }
    cout<<"the sum of the digits are:"<<sum;
    return 0;
}
