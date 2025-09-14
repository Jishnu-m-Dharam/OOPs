/*Define a class University with private members name and ranking.
Provide setters and getters. Demonstrate in main() that private data
members cannot be accessed directly, but only via the methods.*/
#include<iostream>
using namespace std;
class university{
private:
string name;
int ranking;

    public:
void setname(string n){
    name=n;
}
void setranking(int r){
    ranking=r;

}
string getname(){
    return name;
}
int getranking(){
    return ranking;
}
};
int main(){
    university u;
    u.setname("sai university");
    u.setranking(12);
    cout<<"the name is :"<<u.getname()<<"\nthe ranking is:"<<u.getranking();
    return 0;
}