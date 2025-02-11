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
    // Example of function overloading by changing the number of arguments

    // Creating object of Add class
    Add obj;
    obj.sum(10, 20);
    obj.sum(10, 20, 30);
    obj.sum(3.2, 4.3);

    return 0;
}