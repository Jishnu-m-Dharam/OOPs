/*Reverse the digits of a given number. (Example: input 1234 → output
4321)*/
#include<iostream>
using namespace std;
int main(){
int reverse[4];
for (int i = 0; i <=3; i++)
{
   cout<<"enter the number"<<i+1<<":"<<endl;
   cin>>reverse[i];
}

for (int i = 0; i <=3; i++)
{
    cout<<"the numebers are :"<<reverse[i]<<endl;
}
for (int i = 3; i>=0; i--)
{
    cout<<"the reversed numbers are:"<<reverse[i]<<endl;
}



return 0;




}