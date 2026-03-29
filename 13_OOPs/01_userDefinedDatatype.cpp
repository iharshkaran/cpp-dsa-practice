#include<iostream>
#include<string>
using namespace std;

class Car{  // Car is a New dataType also Class
public:
    string name ;
    int price ;
    int seats ;
    string type;
};

void printCar(Car c){
    cout<<"first Car = "<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}

void changeCar(Car &c){
    c.name = "Toyota Fortuner";
    c.price = 4000000;
    c.seats = 7;
    c.type = "Premium SUV";
}

int main(){
    Car c1; // c1 is an object
    c1.name = "BMW M5";
    c1.price = 19000000;
    c1.seats = 5;
    c1.type = "Luxury Sports";

    Car c2;
    c2.name = "Rolls-Royce Phantom";
    c2.price = 100000000;
    c2.seats = 5;
    c2.type = "Ultra Luxury";

    Car c3;
    c3.name = "Ferrari 488 GTB";
    c3.price = 50000000;
    c3.seats = 2;
    c3.type = "Supercar";

    Car c4;
    c4.name = "Dodge Challenger";
    c4.price = 8000000;
    c4.seats = 5;
    c4.type = "Muscle Car";

    printCar(c1);
    changeCar(c1);
    printCar(c1);

} 