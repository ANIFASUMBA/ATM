
#include <iostream>
using namespace std;

class ATM {
private:
    int balance;

public:
    ATM() {
        balance = 0;
    }

    void deposit(int amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }

    void withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    void checkBalance() {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    ATM atm;

    int choice;
    int amount;

    do {
        cout << "ATM Menu:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                atm.deposit(amount);
                break;
            
            case 2:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 3:
                atm.checkBalance();
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}
