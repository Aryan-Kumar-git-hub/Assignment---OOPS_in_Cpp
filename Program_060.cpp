// 60. Program to initialize static data members.

#include <iostream>
using namespace std;

class Student {
public:
    static int count;   // static data member

    Student() {
        count++;
    }

    void show() {
        cout << "Total students = " << count << endl;
    }
};

// Initialization of static data member
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.show();

    return 0;
}
