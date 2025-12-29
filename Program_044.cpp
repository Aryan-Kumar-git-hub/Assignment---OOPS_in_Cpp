// 44. Program to read and display employee details using class.


#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    float salary;

public:
    string name;

    // member function to read data
    void input() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cin.ignore(); 

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // member function to display data
    void display() {
        cout << "\nEmployee Details:\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;   

    e.input();    
    e.display();  
    
    return 0;
}
