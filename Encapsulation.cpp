#include<iostream>
using namespace std;

class BankAccount{
private:
    string accountHolderName;
    double balance;
    int accountNumber;

public:
    BankAccount(){    // Default Constructor
        accountHolderName = "Default";
        balance = 0.0;
        accountNumber = 0;
    }

    BankAccount(string name, double bal, int accNo){    // Parameterized Constructor
        accountHolderName = name;
        balance = bal;
        accountNumber = accNo;
    }

    // method to deposit money
    void deposit(double amount){
        if(amount > 0){
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        } else{
            cout<<"Invalid amount!!"<<endl;
        }
    }

    // method to withdraw money
    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        } else{
            cout<<"Invalid amount!!"<<endl;
        }
    }

    // method to display account details
    void display(){
        cout<<"Account Holder Name: "<<accountHolderName<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl<<endl;
    }
};

int main(){
    
    // Wrapping up of data & member functions in a single using called class.
    // It is also used for data hiding by using access specifiers like private, public, protected.

    BankAccount acc1 = BankAccount("Aman Kumar", 2600, 123456789);
    acc1.display();

    // Deposit money
    acc1.deposit(500);
    acc1.display();

    // Withdraw money
    acc1.withdraw(200);
    acc1.display();
    return 0;
}