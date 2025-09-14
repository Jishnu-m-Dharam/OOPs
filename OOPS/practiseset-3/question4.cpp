/*Create a class Rectangle with private data members length and width.
Write setter and getter methods and calculate the area using them.*/
#include<iostream>
using namespace std;
class rectangle{
    private:
int length;
int width;
public:
void setlength(int l){
    length=l;
}
void setwidth(int w){
    width=w;
}
int getlength(){
    return length;
}
int getwidth(){
    return width;
}

};
int main(
){
rectangle r;
r.setlength(5);
r.setwidth(6);
int area=1;
area=r.getlength()*r.getwidth();
cout<<"the length is:"<<r.getlength()<<"and the width is:"<< r.getwidth()<<endl;
cout<<"the area is :"<<area;
return 0;


}