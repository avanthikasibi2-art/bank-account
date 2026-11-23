#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    long accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(long no, string holder, double amt) {
        accountNumber = no;
        accountHolder = holder;
        balance = amt;
    }

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) balance -= amount;
        else cout << "Invalid amount or insufficient balance\n";
    }

    void displayBalance() {
        cout << accountHolder << " (" << accountNumber
             << ") balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(1001, "Avanthika", 5000);
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.displayBalance();
    return 0;
}