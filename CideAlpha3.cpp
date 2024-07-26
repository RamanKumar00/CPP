#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    Account(int accNumber, string accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }

    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount $" << amount << " deposited successfully." << endl;
        } else {
            cout << "Invalid amount. Please enter a positive value." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount $" << amount << " withdrawn successfully." << endl;
        } else {
            cout << "Invalid amount or insufficient balance." << endl;
        }
    }

    int getAccountNumber() {
        return accountNumber;
    }
};

class BankingSystem {
private:
    vector<Account> accounts;

public:
    void createAccount(int accNumber, string accHolderName, double initialBalance) {
        Account newAccount(accNumber, accHolderName, initialBalance);
        accounts.push_back(newAccount);
        cout << "Account created successfully!" << endl;
    }

    Account* findAccount(int accNumber) {
        for (auto& account : accounts) {
            if (account.getAccountNumber() == accNumber) {
                return &account;
            }
        }
        return nullptr;
    }

    void displayMenu() {
        cout << "\nWelcome to the Banking System" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Display Account Details" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Withdraw Money" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
    }

    void run() {
        int choice;
        while (true) {
            displayMenu();
            cin >> choice;
            switch (choice) {
                case 1: {
                    int accNumber;
                    string accHolderName;
                    double initialBalance;
                    cout << "Enter Account Number: ";
                    cin >> accNumber;
                    cout << "Enter Account Holder Name: ";
                    cin.ignore();
                    getline(cin, accHolderName);
                    cout << "Enter Initial Balance: ";
                    cin >> initialBalance;
                    createAccount(accNumber, accHolderName, initialBalance);
                    break;
                }
                case 2: {
                    int accNumber;
                    cout << "Enter Account Number: ";
                    cin >> accNumber;
                    Account* account = findAccount(accNumber);
                    if (account != nullptr) {
                        account->displayAccountDetails();
                    } else {
                        cout << "Account not found." << endl;
                    }
                    break;
                }
                case 3: {
                    int accNumber;
                    double amount;
                    cout << "Enter Account Number: ";
                    cin >> accNumber;
                    Account* account = findAccount(accNumber);
                    if (account != nullptr) {
                        cout << "Enter Amount to Deposit: ";
                        cin >> amount;
                        account->deposit(amount);
                    } else {
                        cout << "Account not found." << endl;
                    }
                    break;
                }
                case 4: {
                    int accNumber;
                    double amount;
                    cout << "Enter Account Number: ";
                    cin >> accNumber;
                    Account* account = findAccount(accNumber);
                    if (account != nullptr) {
                        cout << "Enter Amount to Withdraw: ";
                        cin >> amount;
                        account->withdraw(amount);
                    } else {
                        cout << "Account not found." << endl;
                    }
                    break;
                }
                case 5: {
                    cout << "Thank you for using the Banking System. Goodbye!" << endl;
                    return;
                }
                default: {
                    cout << "Invalid choice. Please try again." << endl;
                }
            }
        }
    }
};

int main() {
    BankingSystem system;
    system.run();
    return 0;
}
