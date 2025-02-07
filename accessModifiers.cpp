#include<iostream>
using namespace std;

class Student{
public:
    string name;
    string course;

    Student(){
        // default constructor
        name = "XYZ";
        course = "ABC";
        cgpa = 0;
    }

    Student(string name, string course, float cgpa){
        this->name = name;
        this->course = course;
        this->cgpa = cgpa;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Course: "<<course<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }

private:
    float cgpa;
};

int main(){

    Student s1("Aman Kumar", "BCA", 7.8);
    s1.display();

    return 0;
}