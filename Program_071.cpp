// 71. Program with static data member.

#include <iostream>
using namespace std;

class Student {
private:
    static int count;   // static data member

public:
    Student() {
        count++;
    }

    void show() {
        cout << "Number of objects created = " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.show();

    return 0;
}
