#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> customers;
    int choice;
    string name;

    do {
        cout << "\n--- Taxi Queue ---\n";
        cout << "1. Add Customer\n";
        cout << "2. Assign Taxi\n";
        cout << "3. Display Customers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter customer name: ";
                cin >> name;
                customers.push(name);
                cout << name << " added to the queue.\n";
                break;

            case 2:
                if (customers.empty()) {
                    cout << "Queue is empty. No customer to assign a taxi.\n";
                } else {
                    cout << "Taxi assigned to: " << customers.front() << endl;
                    customers.pop();
                }
                break;

            case 3:
                if (customers.empty()) {
                    cout << "Queue is empty. No customers waiting.\n";
                } else {
                    queue<string> temp = customers;
                    cout << "Remaining customers:\n";

                    while (!temp.empty()) {
                        cout << temp.front() << endl;
                        temp.pop();
                    }
                }
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
