//  Write a c++ that demomsntrates the use of class and object, should define a student class

#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int age;
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    Student adx;
    adx.name = "Aditya";
    adx.age = 20;
    adx.display();
    return 0;
}