#include<iostream>
using namespace std;

class AccessModifiers{
public:
    string name;
    int roll;

    AccessModifiers(){
        // Default Constructor
    }

    AccessModifiers(string name, int roll, float cgpa){
        this->name = name;
        this->roll = roll;
        this->cgpa = cgpa;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }

    float getCgpa(){     // getter
        return cgpa;
    }

    void setCgpa(float m){  // setter
        cgpa = m;
    }

private:
    float cgpa;
};

int main(){

    AccessModifiers stu1("Aman", 6, 7.8);   // we can't change the marks, to still change the marks we have to make a setter method
    stu1.setCgpa(7.7);
    stu1.display();

    AccessModifiers stu2;
    stu2.name = "Sumit";
    stu2.roll = 1;
    // stu2.cgpa = 8;   // private, to still access it we have make a getter method
    return 0;
}