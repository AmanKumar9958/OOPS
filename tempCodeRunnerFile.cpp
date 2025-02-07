#include<iostream>
using namespace std;

class Vehicle{
public:
    int topSpeed;
    int wheel;
    int milage;
    string fuelType;

    Vehicle(){

    }
    Vehicle(int topSpeed, int wheel, int milage, string fuelType){
        this->topSpeed = topSpeed;
        this->wheel = wheel;
        this->milage = milage;
        this->fuelType = fuelType;
    }
};

class Bike : public Vehicle{
public:
    int gear;

    Bike(){

    }
    Bike(stirng model, int topSpeed, int wheel, int milage, string fuelType, int gear, int seat){
        this->model = model;
        this->topSpeed = topSpeed;
        this->wheel = wheel;
        this->milage = milage;
        this->fuelType = fuelType;
        this->gear = gear;
        this->seat = seat;
    }
    void display(){
        cout<<"====Bike Details===="<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Top Speed: "<<topSpeed<<endl;
        cout<<"Wheel: "<<wheel<<endl;
        cout<<"Milage: "<<milage<<endl;
        cout<<"Fuel Type: "<<fuelType<<endl;
        cout<<"Gears: "<<gear<<endl;
        cout<<"Seats: "<<seat<<endl;
    }
private:
    string model;
    int seat;
};

class Car : public Bike{
private:
    int seat;
    string model;
public:
    Car(){

    }
    Car(string model, int topSpeed, int wheel, int milage, string fuelType, int gear, int seat){
        this->model = model;
        this->topSpeed = topSpeed;
        this->wheel = wheel;
        this->milage = milage;
        this->fuelType = fuelType;
        this->gear = gear;
        this->seat = seat;
    }
    void display(){
        cout<<"====Car Details===="<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Top Speed: "<<topSpeed<<endl;
        cout<<"Wheel: "<<wheel<<endl;
        cout<<"Milage: "<<milage<<endl;
        cout<<"Fuel Type: "<<fuelType<<endl;
        cout<<"Gears: "<<gear<<endl;
        cout<<"Seats: "<<seat<<endl;
    }
};

int main(){

    Bike b1("Hunter 350", 180, 2, 35, "Petrol", 5, 2);
    Bike b2("Apache TVS 1604v", 190, 2, 32, "Petrol", 5, 2);

    Car c1("Creta", 210, 4, 40, "Diesel/Petrol", 6, 5);

    b1.display();
    b2.display();
    c1.display();

    return 0;
}