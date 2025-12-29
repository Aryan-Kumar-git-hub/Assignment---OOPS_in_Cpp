// 51. Program with default constructor.

#include <iostream>
using namespace std;

class Construct {
public:
    // Default constructor
    Construct() {
        cout << "Default constructor is called";
    }
};

int main() {
    Construct obj;   // constructor is called automatically
    return 0;
}
