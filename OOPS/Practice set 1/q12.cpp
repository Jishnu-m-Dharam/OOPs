#include<iostream>
#include<cmath>
using namespace std;
int main(){
int D;
int a;
int b;
int c;
float root1,root2;

cout<<"enter coeffcients of the eq"<<endl;
cin>>a>>b>>c;
D=b*b-4*(a*c);
if(D>0)
{
    root1=(-b+sqrt(D))/(2*a);
    root2=(-b-sqrt(D))/(2*a);
cout<<"the real roots are"<<root1<<"and"<<root2<<endl;
}
else if (D==0)
{
    root1=-b/(2*a);
    root2=root1;
    cout<<"the roots are equal"<<root1<<"="<<root2<<endl;
}

else if (D<0)
{
   float real= -b/2*a;
    float imaginary = sqrt(-D)/2*a;
cout << "Root 1 = " << real << " + " << imaginary << "i" << endl;
        cout << "Root 2 = " << real << " - " << imaginary<< "i" << endl;
    }





    return 0;
}