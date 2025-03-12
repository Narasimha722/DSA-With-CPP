#include <iostream>
#include <vector>
using namespace std;

// MenuItem class
class MenuItem {
public:
    string name;
    double price;
    string category;

    MenuItem(string n, double p, string c) : name(n), price(p), category(c) {}

    void display() const {
        cout << name << " (" << category << ") - $" << price << endl;
    }
};

// Restaurant class
class Restaurant {
private:
    vector<MenuItem> menu;
    vector<MenuItem> order;

public:
    // Add menu items to the restaurant
    void addMenuItem(const MenuItem& item) {
        menu.push_back(item);
    }

    // Display menu
    void displayMenu() const {
        if (menu.empty()) {
            cout << "No items in the menu!\n";
            return;
        }
        cout << "Restaurant Menu:\n";
        for (const auto& item : menu) {
            item.display();
        }
    }

    // Place an order
    void placeOrder(const string& itemName) {
        for (const auto& item : menu) {
            if (item.name == itemName) {
                order.push_back(item);
                cout << itemName << " added to the order.\n";
                return;
            }
        }
        cout << "Item not found in the menu!\n";
    }

    // Calculate total bill
    double calculateBill() const {
        double total = 0;
        for (const auto& item : order) {
            total += item.price;
        }
        return total;
    }

    // Display order details
    void displayOrder() const {
        if (order.empty()) {
            cout << "No items ordered yet!\n";
            return;
        }
        cout << "Order Summary:\n";
        for (const auto& item : order) {
            item.display();
        }
        cout << "Total Bill: $" << calculateBill() << endl;
    }
};

int main() {
    Restaurant restaurant;

    // Adding menu items
    restaurant.addMenuItem(MenuItem("Pizza", 12.99, "Main Course"));
    restaurant.addMenuItem(MenuItem("Burger", 8.99, "Main Course"));
    restaurant.addMenuItem(MenuItem("Pasta", 10.99, "Main Course"));
    restaurant.addMenuItem(MenuItem("Ice Cream", 4.99, "Dessert"));

    restaurant.displayMenu();

    // Placing orders
    restaurant.placeOrder("Pizza");
    restaurant.placeOrder("Ice Cream");
    restaurant.placeOrder("Burger");

    // Display order summary
    restaurant.displayOrder();

    return 0;
}
