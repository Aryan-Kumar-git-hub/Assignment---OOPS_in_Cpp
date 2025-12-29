//  41. Program defining a simple class and creating objects.


#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    float marks;

    void input() {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;   

    s1.input();  
    s1.display();

    return 0;
}
