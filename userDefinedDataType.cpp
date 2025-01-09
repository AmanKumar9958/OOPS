#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int roll;
    float cgpa;
    string course;

    void displayData(){
        cout<<"=====Student Details====="<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
        cout<<"Course: "<<course<<endl;
    }
};

int main(){
    Student stu1;       // Student is my user defined datatype..stu1 is my variable..
    cout<<"Enter Name: ";
    getline(cin, stu1.name);

    cout<<"Enter Roll: ";
    cin>>stu1.roll;

    cout<<"Enter CGPA: ";
    cin>>stu1.cgpa;

    cin.ignore();

    cout<<"Enter Course: ";
    getline(cin, stu1.course);

    cout<<endl;

    Student stu2;
    stu2.name = "Sumit Kumar";
    stu2.roll = 1;
    stu2.cgpa = 7.9;
    stu2.course = "BCA";

    stu1.displayData();

    return 0;
}