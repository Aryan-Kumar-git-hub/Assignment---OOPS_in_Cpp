//

#include <iostream>
using namespace std;

class Account {
private:
    int balance;   // hidden data

public:
    void setBalance(int b) {
        if (b >= 0)
            balance = b;
        else
            balance = 0;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    Account acc;

    int money;
    cout << " Add money : ";
    cin >> money;
    acc.setBalance(money);   // accessing data through function
    cout << "Balance = " << acc.getBalance() << endl;



    return 0;
}
