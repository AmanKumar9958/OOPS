#include<iostream>
using namespace std;

// pointers practice..
void pointerPractice(){
    string name = "Aman";
    string* n = &name;

    cout<<"Address of "<<name<<" :"<<n<<endl;     // address of name
    cout<<"Address of *n: "<< &n<<endl;           // address of *n (stores address of name)
    cout<<"Fetching value from *n: "<<*n<<endl;   // fetching value from the *n

    *n = "Gopal";
    cout<<"Changed value: "<<name<<endl;          // value changed
    cout<<"Address of changed value: "<<&name<<endl;    // same
}

class KabaddiPlayers{
public:
    string name;
    int raidPoints;
    int tacklePoints;
    int matches;

    KabaddiPlayers(string name, int raidPoints, int tacklePoints, int matches){
        this-> name = name;
        this-> raidPoints = raidPoints;
        this-> tacklePoints = tacklePoints;
        this-> matches = matches;
    }

    void display(){
        cout<<"-- Players Details --"<<endl;
        cout<<"Player Name: "<<name<<endl;
        cout<<"Matches Played: "<<matches<<endl;
        cout<<"Total Raid Points: ; "<<raidPoints<<endl;
        cout<<"Total Tackle Points: ; "<<tacklePoints<<endl;
    }
};

void changeData(KabaddiPlayers* k){
    *k->matches = 1985;
};

int main(){

    KabaddiPlayers k1("Pardeep Narwal", 1800, 5, 500);
    KabaddiPlayers k2("Rahul Chaudhary", 1300, 20, 455);
    KabaddiPlayers k3("Pawan Sherawat", 1400, 90, 430);
    KabaddiPlayers k4("Sandeep Narwal", 300, 390, 230);

    // int playersList[] = [k1, k2, k3, k4];
    // k1.display();

    KabaddiPlayers* p1 = &k1;
    KabaddiPlayers* p2 = &k2;

    cout<<"Address of 1st Player: "<<p1<<endl;  // stores address of each player
    cout<<"Address of 2nd Player: "<<p2<<endl;  // stores address of each player


    // changing values using pointers
    cout<<"Raid Points before Change: "<<k1.raidPoints<<endl;
    p1->raidPoints = 1900;
    cout<<"Raid Points after Change: "<<k1.raidPoints<<endl;

    // changing values using function and pointer
    cout<<"Match played before change: "<<k1.matches<<endl;
    changeData(&k1);     // using functions and pointers
    cout<<"Match played after change: "<k1.matches<<endl;

    return 0;
}