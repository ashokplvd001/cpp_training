#include <iostream>
using namespace std;

class BankAccount3 {
private:
    double balance;

public:
    BankAccount3(double initialBalance) : balance(initialBalance) {}

    double getBalance() const {  // Const member function

        return balance;          // Ensures no modification to object
    }

    void display(const int a[], int n) const
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << endl;
    }

    void deposit(double amount) {
        balance += amount;
    }
};

void program6() {
    BankAccount3 acc(1000.0);

    acc.deposit(500.0);

    // Call to const function
    cout << "Current balance: $" << acc.getBalance() << endl;

    int  a[5] = { 2 , 5 , 6 , 8 , 1 };

    acc.display(a, 5);

    return ;
}