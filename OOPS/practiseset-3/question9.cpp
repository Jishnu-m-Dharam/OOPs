/*Write a class Temperature with a private member celsius. Provide
setCelsius() and getFahrenheit() methods to convert the stored
temperature to Fahrenheit.*/

#include<iostream>
using namespace std;
class temp
{
private:
   float celcius;
public:
    void setcelcius(float c){
        celcius=c;
    };
   float getFahrenheit() {
        return (celcius * 9.0/5.0) + 32;  // conversion formula
    }
  

};

int main(){
    temp t;
    t.setcelcius(25.0);
    cout<<"fahrenheit:"<<t.getFahrenheit();
    return 0;
}