#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    double balance;

public:
    // Constructor Overloading
    BankAccount(int accNum) : accountNumber(accNum), balance(0) {} // Default balance = 0
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {} // Custom balance

    // Function Overloading for deposit
    void deposit(int amount) {
        balance += amount;
        cout << "Deposited (int): " << amount << ", New Balance: " << balance << endl;
    }
    
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited (double): " << amount << ", New Balance: " << balance << endl;
    }

    // Function Overloading for withdrawal
    void withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn (int): " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn (double): " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Operator Overloading to compare balances of two accounts
    bool operator>(const BankAccount &other) const {
        return balance > other.balance;
    }

    bool operator<(const BankAccount &other) const {
        return balance < other.balance;
    }

    // Display Account Info
    void display() const {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1(101, 5000); // Using constructor with balance
    BankAccount acc2(102);       // Using constructor with default balance

    acc1.deposit(1000);       // Depositing int amount
    acc2.deposit(1500.50);    // Depositing double amount

    acc1.withdraw(500);       // Withdrawing int amount
    acc2.withdraw(2000.75);   // Withdrawing double amount

    acc1.display();
    acc2.display();

    // Comparing accounts
    if (acc1 > acc2)
        cout << "Account 1 has more balance than Account 2" << endl;
    else if (acc1 < acc2)
        cout << "Account 2 has more balance than Account 1" << endl;
    else
        cout << "Both accounts have the same balance" << endl;

    return 0;
}
