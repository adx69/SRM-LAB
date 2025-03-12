#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    double salary;
    string designation;

public:
    // Parameterized Constructor
    Employee(int id, string empName, double empSalary, string empDesignation) {
        empID = id;
        name = empName;
        salary = empSalary;
        designation = empDesignation;
    }

    // Copy Constructor
    Employee(const Employee &e) {
        empID = e.empID;
        name = e.name;
        salary = e.salary;
        designation = e.designation;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Designation: " << designation << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    // Creating Employee E1 using parameterized constructor
    Employee E1(101, "John Doe", 50000.0, "Software Engineer");
    
    // Creating Employee E2 as a copy of E1
    Employee E2 = E1;
    
    // Displaying employee details
    cout << "Employee E1 details:\n";
    E1.displayDetails();
    
    cout << "Employee E2 details (copied from E1):\n";
    E2.displayDetails();
    
    return 0;
}
