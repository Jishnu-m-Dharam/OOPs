/*6. Write a class Car with private members brand and model. Provide
setter and getter methods. In main(), create an array of cars and use
the methods to assign and print their values.*/
#include<iostream>
using namespace std;
class car{
private:
string brand;
int model;
public:
void setbrand( string b){
    brand=b;

}
void setmodel(int m){
   model=m; 
}
string getbrand(){
    return brand;
}
int getmodel(){
    return model;
}
};
int main(){
    car cars[2];
    cars[0].setbrand("audi");
    cars[0].setmodel(2025);
    cars[1].setbrand("kia");
    cars[1].setmodel(2015);
    for (int i = 0; i < 3; i++)
    {
        cout<<"the brand is: "<<cars[i].getbrand()<<"\nand the model is:"<<cars[i].getmodel()<<endl;
    }
    
    
    return 0;
}