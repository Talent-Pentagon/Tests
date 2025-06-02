#include <stdio.h>
#include <string.h>

typedef struct Account Account;

struct Account {
    char owner[50];
    double balance;
    void (*deposit)(Account*, double);
    int (*withdraw)(Account*, double);
    void (*print)(Account*);
};

void deposit(Account* acc, double amount) {
    acc->balance += amount;
}

int withdraw(Account* acc, double amount) {
    acc->balance -= amount;
    return 1;
}

void print(Account* acc) {
    printf("Owner: %s | Balance: %.2f\n", acc->owner, acc->balance);
}

int main() {
    Account acc = {"Alice", 1000.0, deposit, withdraw, print};
    acc.print(&acc);
    acc.deposit(&acc, 500);
    acc.withdraw(&acc, 200);
    acc.print(&acc);
    return 0;
}
