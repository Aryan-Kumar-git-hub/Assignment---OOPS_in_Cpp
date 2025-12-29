// 95. Program using inheritance for employee-payroll.

#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    int empId;
    string name;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
    }

    void showEmployee() {
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << name << endl;
    }
};

// Derived class
class Payroll : public Employee {
protected:
    float basic, hra, da, gross;

public:
    void getSalary() {
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calculate() {
        hra = basic * 0.20;   // 20% HRA
        da  = basic * 0.10;   // 10% DA
        gross = basic + hra + da;
    }

    void showPayroll() {
        showEmployee();
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << gross << endl;
    }
};

int main() {
    Payroll obj;

    obj.getEmployee();   
    obj.getSalary();  
    obj.calculate();
    obj.showPayroll();

    return 0;
}
