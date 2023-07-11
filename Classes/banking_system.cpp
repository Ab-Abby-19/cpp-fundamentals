#include <iostream>
#include <string>
using namespace std;

class Bank
{
    int accountNo;
    string name;
    string accountType;
    float balance;

public:
    Bank(int accNo, const string& nm, const string& accType, float bal)
        : accountNo(accNo), name(nm), accountType(accType), balance(bal)
    {
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance. Withdrawal failed." << endl;
            return;
        }
        balance -= amount;
    }

    void display()
    {
        cout << "Account No.: " << accountNo << endl;
        cout << "Name: " << name << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    int accountNo;
    string name, accountType;
    float balance;

    cout << "Enter Account No.: ";
    cin >> accountNo;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Account Type: ";
    getline(cin, accountType);
    cout << "Enter Balance: ";
    cin >> balance;

    Bank bank(accountNo, name, accountType, balance);

    float depositAmount, withdrawAmount;
    cout << "Enter Deposit Amount: ";
    cin >> depositAmount;
    bank.deposit(depositAmount);

    cout << "Enter Withdraw Amount: ";
    cin >> withdrawAmount;
    bank.withdraw(withdrawAmount);

    cout << endl;
    bank.display();

    return 0;
}
