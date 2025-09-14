#include<iostream>
using namespace std;
int main(){
int n1,n2;
cout<<"enter the numbers:";
cin>>n1>>n2;
if (n1==0)
{
    cout<<n2<<"is the greatest number";
}
else if (n2==0)
{
    cout<<n1<<"is the greatest number";
}
while (n2!=0)
{
    int temp;
    temp=n2;
    n2=n1%n2;
    n1=temp;
}

cout<<"the gcd is "<<n1;
return 0;
}