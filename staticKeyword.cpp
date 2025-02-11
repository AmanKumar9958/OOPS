#include<iostream>
using namespace std;

// before using static keyword
// void increment(){
//     int x = 0;
//     cout<<"X: "<<x<<endl;
//     x++;
// }

// after using static keyword
// static void increment(){
//     static int x = 0;   // static keyword is used to declare a variable that is to be shared among all objects of the class.
//     cout<<"X: "<<x<<endl;
//     x++;
// }

class A{
public:
    static int x;
    void inc(){
        cout<<"X: "<<x<<endl;
        x = x + 1;
    }
};


int main(){
    // static keyword is used to declare a variable that is to be shared among all objects of the class.
    // It is used to declare a variable that is common to all objects of the class.

    // increment();    // before: 0, after: 0
    // increment();    // before: 0, after: 1
    // increment();    // before: 0, after: 2

    A obj1;
    A obj2;
    obj1.x = 100;
    obj2.x = 200;

    obj1.inc();
    obj1.inc();
    obj2.inc();
    obj2.inc(); 

    return 0;
}