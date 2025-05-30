#include <iostream>
using namespace std;

class Account {
private:
    double balance;
public:
    Account(double b) : balance(b) {}
    bool withdraw(double amount) {
        if(balance = amount) { 
            balance -= amount;
            return true;
        }
        return false;
    }
    double getBalance() const { return balance; }
};

int main() {
    double initial, withdraw_amount;
    cout << "Enter initial balance and withdrawal amount: ";
    cin >> initial >> withdraw_amount;
    Account acc(initial);
    if(acc.withdraw(withdraw_amount)) {
        cout << "Withdrawal successful. New balance: " << acc.getBalance() << endl;
    } else {
        cout << "Insufficient funds" << endl;
    }
    return 0;
}