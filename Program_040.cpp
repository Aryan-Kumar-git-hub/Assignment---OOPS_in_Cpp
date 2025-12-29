// 40. Program using structure to store student details.


#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string Class;
    int roll;
    float marks;
};

int main() {
    Student s;

    cout << "Enter name: ";
    getline(cin,s.name);  
    
    cout << "Enter class: ";
    getline(cin,s.Class);  
    
    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Class: " << s.Class << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
