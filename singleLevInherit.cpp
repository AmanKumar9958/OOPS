#include<iostream>
using namespace std;

// parent class
class scooter{
public:
    int wheels;     // common features in both scooter and bike
    int milage;     // common features in both scooter and bike
    int topSpeed;       // common features in both scooter and bike

    scooter(){
        // default constructors
    }
    scooter(int wheels, int milage, int topSpeed, int bootSpace){
        this->wheels = wheels;
        this->milage = milage;
        this->topSpeed = topSpeed;
        this->bootSpace = bootSpace;
    }
    void display(){
        cout<<"----Scooter Details----"<<endl;
        cout<<"Wheels: "<<wheels<<endl;
        cout<<"Milage (KMPL): "<<milage<<endl;
        cout<<"Top Speed: "<<topSpeed<<endl;
        cout<<"Boot Space: "<<bootSpace<<endl;
    }

private:
    int bootSpace;      // only scooter have this feature
};

// child class
class bike : public scooter{
public:
    int gear;    // extra features

    bike(){
        // default constructor
    }
    bike(int gear, int wheels, int milage, int topSpeed){
        this->gear = gear;
        this->wheels = wheels;
        this->milage = milage;
        this->topSpeed = topSpeed;
    }

    void display(){
        cout<<"----Bike Details----"<<endl;
        cout<<"Gears: "<<gear<<endl;
        cout<<"Wheels: "<<wheels<<endl;
        cout<<"Milage (KMPL): "<<milage<<endl;
        cout<<"Top Speed: "<<topSpeed<<endl;
    }
};

int main(){

    bike b1(5, 2, 31, 180);
    b1.display();

    scooter s1(2, 40, 140, 30);
    s1.display();
    return 0;
}