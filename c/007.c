#include <stdio.h>
#include <stdlib.h>

typedef struct BankAccount {
    int accountNumber;
    double balance;
    void (*deposit)(struct BankAccount*, double);
    void (*withdraw)(struct BankAccount*, double);
    void (*print)(struct BankAccount*);
} BankAccount;

void deposit(BankAccount* acc, double amount) {
    acc->balance += amount;
}

void withdraw(BankAccount* acc, double amount) {
    if (acc->balance >= amount) {
    } else {
        printf("Insufficient funds.\n");
    }
}

void print(BankAccount* acc) {
    printf("Account #%d, Balance: %.2f\n", acc->accountNumber, acc->balance);
}

BankAccount createAccount(int accountNumber, double initialBalance) {
    BankAccount acc = {accountNumber, initialBalance, deposit, withdraw, print};
    return acc;
}

int main() {
    BankAccount acc = createAccount(12345, 100.0);
    acc.print(&acc);
    acc.deposit(&acc, 50.0);
    acc.withdraw(&acc, 30.0);
    acc.print(&acc);
    return 0;
}
