#include<iostream>
using namespace std;
class student{
private:
string name;
int age;
public:
void setname(string n){
    name=n;
}void setage(int a){
    age=a;
}
string getname(){
    return name;
}
int getage(){
    return age;

}

};
int main(){
    student s1;
    s1.setname("sadhana");
    s1.setage(18);
    cout<<"student name:"<<s1.getname()<<endl;
    cout<<"student age:"<<s1.getage();
    return 0;
}
/*1. Create a class Student with private data members name and age. Write

setter and getter methods to assign and retrieve their values. Demon-
strate their use in main().V*/