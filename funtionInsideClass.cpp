#include<iostream>
using namespace std;

class kabaddiPlayer{
public:
    string name;
    int points;

    kabaddiPlayer(string name, int points){
        this->name = name;
        this->points = points;
    }


    // Function inside the class..
    void showRecord(){
        cout<<name<<" -> "<<points<<endl;
    }
};

int main(){

    kabaddiPlayer("Pardeep Narwal", 1800).showRecord();
    kabaddiPlayer("Rahul Chaudhary", 1200).showRecord();

    return 0;
}