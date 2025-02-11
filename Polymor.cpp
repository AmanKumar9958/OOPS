#include<iostream>
using namespace std;

class Add{
    public:
        // Function overloading..
        void sum(int a, int b){ // Function with two arguments, function name is same but arguments are different
            cout<<"Sum of two integers: "<<a+b<<endl;
        }
        void sum(int a, int b, int c){ // Function with three arguments, function name is same but arguments are different
            cout<<"Sum of three integers: "<<a+b+c<<endl;
        }
        void sum(double a, double b){   // Function with two double arguments, function name is same but arguments are different
            cout<<"Sum of two double numbers: "<<a+b<<endl;
        }
};

int main(){
    // Polymorphism: Poly means many and morphism means forms. Polymorphism is a feature of OOPs that allows the object to behave differently in different situations.
    // Polymorphism is of two types:
    // 1. Compile Time Polymorphism
    // 2. Run Time Polymorphism

    // example: Aman -> Son, brother, Father, Husband, etc.

    // 1. Compile Time Polymorphism
    // Compile time polymorphism is achieved by function overloading and operator overloading.

    // Function Overloading: Function overloading is a feature that allows us to have more than one function with the same name but with different parameters.
    // Function overloading can be done in two ways:
    // 1. By changing the number of arguments
    // 2. By changing the data type of arguments

    // Example of function overloading by changing the number of arguments

    // Creating object of Add class
    Add obj;
    obj.sum(10, 20);
    obj.sum(10, 20, 30);
    obj.sum(3.2, 4.3);

    // 2. Run Time Polymorphism
    // Run time polymorphism is achieved by function overriding.

    // Function Overriding: Function overriding is a feature that allows us to have a same function in the derived class which is already present in the base class.
    // Function overriding is done so that a derived class can give its own implementation to a function which is already provided by the base class.
    // It is used to achieve runtime polymorphism.
    // Function overriding can only be done in the derived class.

    return 0;
}