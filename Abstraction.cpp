#include<iostream>
using namespace std;

class shape{
public:
    virtual void area() = 0;    // Pure virtual function, no implementation in base class but must be implemented in derived class

    void display(){
        cout << "This is a shape.." << endl;
    }
};

class Rectangle : public shape{
private:
    int length, breadth;
public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }

    void area(){    // Must be implemented in derived class 
        cout<<"Area of rectangle: "<<length*breadth<<endl;
    }
};

class Circle : public shape{
private:
    int radius;
public:
    Circle(int r){
        radius = r;
    }

    void area(){    // Must be implemented in derived class 
        cout<<"Area of circle: "<<3.14*radius*radius<<endl;
    }
};

int main(){

    // Abstraction is the concept of hiding the internal implementation of an object and only showing the necessary details to the user.
    // In C++, classes provide great level of abstraction.
    // For example, consider a class called 'Car' which has a method called 'start()'. The user only needs to know that the car can be started by calling the 'start()' method. The user does not need to know how the method works internally.
    // This is called abstraction.

    // Abstraction is the concept of hiding implementation details and only showing the essential features of an object.
    // It is achieved using *abstract classes* and interfaces *(pure virtual functions)* in C++.

    // shape obj;  // Error: Cannot create object of abstract class

    Rectangle r(10, 5);
    r.area();   // Area function is inherited from base class
    r.display();    // Display function is inherited from base class

    Circle c(5);
    c.area();   // Area function is inherited from base class
    c.display();    // Display function is inherited from base class

    return 0;
}