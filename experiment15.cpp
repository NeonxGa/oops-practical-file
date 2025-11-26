#include <iostream>
#include <string>
using namespace std;
class Bank {
private:
    string name;
    int accNo;
    string accType;
    float balance;

public:
    void initialize() {
        cout << "\nEnter Name of Depositor: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Account Type: ";
        cin >> accType;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amt;
        cout << "\nEnter Amount to Deposit: ";
        cin >> amt;
        balance += amt;
        cout << "Amount Deposited.\n";
    }

    void withdraw() {
        float amt;
        cout << "\nEnter Amount to Withdraw: ";
        cin >> amt;

        if (amt > balance) {
            cout << "Insufficient Balance. Withdrawal Failed.\n";
        } else {
            balance -= amt;
            cout << "Amount Withdrawn.\n";
        }
    }

    void display() {
        cout << "\n----- Account Details -----\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNo << endl;
        cout << "Account Type: " << accType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank customers[10];   // an array of 10 Bank objects

    cout << "\nEnter details of 10 customers:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nCustomer " << i + 1 << ":\n";
        customers[i].initialize();
    }

    int choice, index;

    do {
        cout << "\n---- MENU ----\n";
        cout << "1. Deposit Amount\n";
        cout << "2. Withdraw Amount\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter customer index (1 to 10): ";
            cin >> index;

            if (index < 1 || index > 10) {
                cout << "Invalid customer index.\n";
                continue;
            }
        }

        switch (choice) {
            case 1:
                customers[index - 1].deposit();
                break;
            case 2:
                customers[index - 1].withdraw();
                break;
            case 3:
                customers[index - 1].display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
