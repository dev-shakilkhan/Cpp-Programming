#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// Class for Menu Items
class MenuItem {
public:
    int id;
    string name;
    float price;

    MenuItem() {}
    MenuItem(int id, string name, float price) {
        this->id = id;
        this->name = name;
        this->price = price;
        
    }

    void display() {
        cout << id << ". " << name << " - $" << fixed << setprecision(2) << price << endl;
    }
};

// Class for Customer
class Customer {
public:
    string name;
    string phone;

    void inputDetails() {
        cout << "Enter Customer Name: ";
        getline(cin, name);
        cout << "Enter Phone Number: ";
        getline(cin, phone);
    }
};

// Class for Order
class Order {
public:
    static int orderCount;
    int orderID;
    Customer customer;
    MenuItem items[10];
    int quantities[10];
    int itemCount;

    Order() {
        itemCount = 0;
        orderID = ++orderCount;
    }

    void addItem(MenuItem item, int quantity) {
        items[itemCount] = item;
        quantities[itemCount] = quantity;
        itemCount++;
    }

    float calculateTotal() {
        float total = 0;
        for (int i = 0; i < itemCount; i++) {
            total += items[i].price * quantities[i];
        }
        return total;
    }

    void generateBill() {
        cout << "\n--- Bill ---\n";
        cout << "Order ID: " << orderID << endl;
        cout << "Customer: " << customer.name << endl;
        cout << "Phone: " << customer.phone << endl;
        cout << "Items Ordered:\n";
        for (int i = 0; i < itemCount; i++) {
            cout << items[i].name << " x " << quantities[i]
                 << " = $" << fixed << setprecision(2) << items[i].price * quantities[i] << endl;
        }
        cout << "Total Amount: $" << fixed << setprecision(2) << calculateTotal() << endl;
    }

    void saveToFile() {
        ofstream outFile("orders.txt", ios::app);
        outFile << "Order ID: " << orderID << "\n";
        outFile << "Customer: " << customer.name << ", Phone: " << customer.phone << "\n";
        outFile << "Items:\n";
        for (int i = 0; i < itemCount; i++) {
            outFile << items[i].name << " x " << quantities[i]
                    << " = $" << fixed << setprecision(2) << items[i].price * quantities[i] << "\n";
        }
        outFile << "Total: $" << fixed << setprecision(2) << calculateTotal() << "\n";
        outFile << "==============================\n";
        outFile.close();
    }
};

int Order::orderCount = 0;

// Function to view order history
void viewOrderHistory() {
    ifstream inFile("orders.txt");
    if (!inFile) {
        cout << "No order history found.\n";
        return;
    }

    cout << "\n--- Order History ---\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
}

int main() {
    MenuItem menu[5] = {
        MenuItem(1, "Burger", 5.99),
        MenuItem(2, "Pizza", 8.99),
        MenuItem(3, "Pasta", 6.49),
        MenuItem(4, "Fries", 2.99),
        MenuItem(5, "Soda", 1.49)
    };

    int option;

    do {
        cout << "\nWelcome to Online Food Ordering System\n";
        cout << "1. Place New Order\n";
        cout << "2. View Order History\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;
        cin.ignore(); // Clear newline after number input

        if (option == 1) {
            // Display menu
            cout << "\n--- Menu ---\n";
            for (int i = 0; i < 5; i++) {
                menu[i].display();
            }

            Order order;
            order.customer.inputDetails();

            int choice, quantity;
            char more;

            do {
                cout << "Enter the item ID to order: ";
                cin >> choice;
                cout << "Enter quantity: ";
                cin >> quantity;

                if (choice >= 1 && choice <= 5) {
                    order.addItem(menu[choice - 1], quantity);
                } else {
                    cout << "Invalid item ID!\n";
                }

                cout << "Do you want to order more items? (y/n): ";
                cin >> more;
            } while (more == 'y' || more == 'Y');

            order.generateBill();
            order.saveToFile();
            cout << "Thank you for your order!\n";

        } else if (option == 2) {
            viewOrderHistory();
        } else if (option == 3) {
            cout << "Exiting... Thank you!\n";
        } else {
            cout << "Invalid choice! Please try again.\n";
        }

    } while (option != 3);

    return 0;
}
