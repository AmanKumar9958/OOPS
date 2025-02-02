#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;

    Cricketer(string name, int runs){
        this->name = name;
        this->runs = runs;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
    }
};

int main(){
    // static memory allocation..
    // int x = 4;
    // cout<<"Static memory allocation:"<<endl;
    // cout<<"Value of x: "<<x<<endl;


    // dynamic memory allocation..
    // int* ptr = new int(5);
    // cout<<"Dynamic memory allocation:"<<endl;
    // cout<<"Value of ptr: "<<*ptr<<endl;


    // static object allocation..
    Cricketer player1("Aman Kumar", 850);
    player1.display();
    cout<<endl;

    // dynamic object allocation..
    Cricketer* player2 = new Cricketer("Gopal Kumar", 900);
    player2->display();
    cout<<endl;

    return 0;
}