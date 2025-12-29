// 94. Program using inheritance for student mark processing.

#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    int roll;
    string name;

public:
    void getStudent() {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin , name);
    }

    void showStudent() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class
class Marks : public Student {
protected:
    int m1, m2, m3;
    int total;
    float percent;

public:
    void getMarks() {
        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate() {
        total = m1 + m2 + m3;
        percent = total / 3.0;
    }

    void showResult() {
        showStudent();
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percent << "%" << endl;

        if (percent >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main() {
    Marks obj;

    obj.getStudent();   
    obj.getMarks();  
    obj.calculate();
    obj.showResult();

    return 0;
}
