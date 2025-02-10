#include<iostream>
using namespace std;

class cricketer{
public:
    int runs;
    float average;
    int matches;
};

class footballer{
public:
    int goals;
    int assists;
    int matches;
};

class sportsman: public cricketer, public footballer{
public:

    sportsman(){
        // default constructor
        runs = 0;
        average = 0;
        cricketer::matches = 0;
        footballer::matches = 0;
        goals = 0;
        assists = 0;
    }

    sportsman(int runs, float average, int cricket_matches, int football_matches, int goals, int assists){
        // parameterized constructor
        this->runs = runs;
        this->average = average;
        this->cricketer::matches = cricket_matches;     // to avoid ambiguity
        this->footballer::matches = football_matches;   // to avoid ambiguity
        this->goals = goals;
        this->assists = assists;
    }
    void display(){
        cout<<"====Sportsman Details===="<<endl;
        cout<<"---Cricketer Details---"<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Average: "<<average<<endl;
        cout<<"Matches (Cricket): "<<cricketer::matches<<endl;
        cout<<"---Footballer Details---"<<endl;
        cout<<"Matches (Football): "<<footballer::matches<<endl;
        cout<<"Goals: "<<goals<<endl;
        cout<<"Assists: "<<assists<<endl;
    }
};

int main(){

    sportsman s1(1000, 50, 100, 100, 300, 50);
    s1.display();

    return 0;
}