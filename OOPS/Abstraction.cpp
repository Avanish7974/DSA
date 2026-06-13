#include <iostream>
using namespace std;
class BankAccount
{
private:
    int balance;

public:
    BankAccount()
    {
        balance = 1000;
        cout << balance << endl;
    }

    void deposit(int amount)
    {
        balance += amount;
    }

    void showBalance()
    {
        cout << balance;
    }
};

int main()
{
    BankAccount b;

    b.deposit(500);
    b.showBalance();

    return 0;
}

