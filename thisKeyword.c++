#include<iostream>
using namespace std;

class Animal{
public:
    string nature;
    string name;

    // parameterized constructor..
    // Animal(string na, string nm){
    //     nature = na;    // both are different..
    //     name = nm;      // both are different..
    // }

    // Using this keyword..
    Animal(string name, string nature){
        this->name = name;
        this->nature = nature;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Nature: "<<nature<<endl;
        cout<<"------------"<<endl;
    }
};

int main(){

    // calling the constructor..
    Animal("Lion", "Carnivorous").display();
    Animal("Cow", "Herbivorous").display();
    Animal("Bear", "Omnivorous").display();

    return 0;
}