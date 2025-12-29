// 42. Program with private and public members.


#include <iostream>
using namespace std;

class Student {
private:
    int roll;        // private data member

public:
    string name;     // public data member

    void set_roll(int r) {
        roll = r;
    }

    int get_roll() {
        return roll;
    }

    void input() {
        cout << "Enter name: ";
        cin >> name;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }
};

int main() {
    Student s;

    s.input();          
    s.set_roll(10);      
    s.display();

    return 0;
}
