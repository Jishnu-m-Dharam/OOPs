/*Write a program that defines a class Book with private members title
and price. Implement setters and getters for both members, and print
the details of the book object.*/
#include<iostream>
using namespace std;
class book{
private:
string title;
int price;
public:
void setTitle(string t){
    title=t;
}
void setprice(int p){
    price=p;
}
string getTitle(){
    return title;

}
int getprice(){
    return price;
}
};
int main(){
    book b;
    b.setprice(500);
    b.setTitle("malgudi days");
    cout<<"the book title is:"<<b.getTitle()<<endl;
    cout<<"the price is:"<<b.getprice();
    return 0;
}