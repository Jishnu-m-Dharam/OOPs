/*7. Implement a class Circle with a private data member radius. Provide
setters and getters, and an additional method getArea() that uses the
getter to calculate the area.*/
#include<iostream>
using namespace std;
class circle{
private:
int radius;
public:
void setradius(int r){
    radius=r;
}
int getradius(){
    return radius;
}
float getarea()
{
    float a;
    a=3.14*(getradius()*getradius());
    return a;
}
};
int main(
){
    circle c;
    c.setradius(5);
    cout<<"the radius is:"<<c.getradius()<<"\nthe area is :"<<c.getarea();
    return 0;
}