#include<iostream>
using namespace std;

class Cars{
public:
    string brand;
    string model;
    int year;
    int seat;

    // Default constructor..
    Cars(){

    }

    // Parameterized constructor..
    Cars(string b, string m, int y, int s){
        brand = b;
        model = m;
        year = y;
        seat = s;
    }
};

int main(){
    // Calling Parameterized constructor..
    Cars c1("Hyundai", "Creta", 2019, 5);

    // Adding values using classes & objects..
    Cars c2;
    c2.brand = "Lamborghini";
    c2.model = "Hurracane";
    c2.year = 2015;
    c2.seat = 2;

    // printing the data..
    cout<<"Car 1 details: "<<endl;
    cout<<c1.brand<<" "<<c1.model<<" "<<c1.year<<" "<<c1.seat<<endl;

    cout<<"Car 2 details: "<<endl;
    cout<<c2.brand<<" "<<c2.model<<" "<<c2.year<<" "<<c2.seat<<endl;
    return 0;
}