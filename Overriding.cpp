#include<iostream>
using namespace std;

class Scooty{
public:
    void start(){
        cout<<"Scooty started"<<endl;
    }
    void stop(){
        cout<<"Scooty stopped"<<endl;
    }
};

class Bike: public Scooty{
public:
    void start(){   // Function overriding, same function name as in the base class, but different implementation
        cout<<"Bike started"<<endl;
    }
    void stop(){    // Function overriding, same function name as in the base class, but different implementation
        cout<<"Bike stopped"<<endl;
    }
};

int main(){
    // Overriding: Overriding is a feature that allows us to have a same function in the derived class which is already present in the base class.

    // Creating object of Bike class
    Bike obj;
    obj.start();
    obj.stop();

    // Creating object of Scooty class
    Scooty obj1;
    obj1.start();
    obj1.stop();
    return 0;
}