// 

#include <iostream>
using namespace std;

class Student {
private:
    static int count;   // static data member

public:
    Student() {
        count++;
    }

    // static member function
    static void showCount() {
        cout << "Number of objects created = " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    // calling static member function
    Student::showCount();

    return 0;
}
