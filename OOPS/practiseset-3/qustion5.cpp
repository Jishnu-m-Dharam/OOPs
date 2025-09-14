/*5. Define a class Employee with private members id and salary. Use
setters and getters to initialize and display their values. In main(),
create multiple employees and print their details.*/
#include<iostream>
using namespace std;
class employee{
private:
int id;
int salary;
public:
void setid(int i){
    id=i;
}
void setsalary(int s){
   salary=s;
}
int getid()
{
    return id;

}
int getsalary(){
    return salary;
}
};
int main(){
    employee e;
    e.setid(15);
    e.setsalary(45000);
    cout<<"the id of E1 is:"<<e.getid()<<"and salary is:"<<e.getsalary()<<endl;
     employee e1;
    e1.setid(19);
    e1.setsalary(55000);
    cout<<"the id of E2 is:"<<e1.getid()<<"and salary is:"<<e1.getsalary()<<endl;
    
}