#include<iostream>
using namespace std;
int main(){
int grade;
cout<<"enter grade:";
cin>>grade;
if (grade>=90)
{
    cout<<"the entered grade is 'A'";
}
else if (grade<90 && grade>79)
{
    cout<<"the entered grade is 'B'";
}
else if (grade<80 && grade>69)
{
    cout<<"the entered grade is 'B'";
}
else if (grade<70 && grade>59)
{
    cout<<"the entered grade is 'C'";
}
else if (grade<60)
{
    cout<<"the grade is 'F'";
}
return 0;
}