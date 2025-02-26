#include <iostream>
using namespace std;

class AmountSpent {
private:
    double itemPrice;
    int quantity;

public:
    // Constructor to initialize item price and quantity
    AmountSpent(double price, int qty) {
        itemPrice = price;
        quantity = qty;
    }

    // Function to calculate total amount spent
    double getTotalAmountSpent() {
        return itemPrice * quantity;
    }
};

class Bill {
private:
    static double totalAmountSpent;

public:
    // Function to calculate total bill with 5% tax
    static double calculateTotalBill(AmountSpent order) {
        double total = order.getTotalAmountSpent();
        double tax = total * 0.05;
        totalAmountSpent += total + tax;
        return total + tax;
    }

    // Function to return the static total amount spent
    static double getTotalSpent() {
        return totalAmountSpent;
    }
};

// Initialize static variable
double Bill::totalAmountSpent = 0;

int main() {
    double itemPrice;
    int quantity;
    
    cout << "Enter item price: ";
    cin >> itemPrice;
    cout << "Enter quantity: ";
    cin >> quantity;

    AmountSpent order(itemPrice, quantity);

    double totalBill = Bill::calculateTotalBill(order);
    int roundedBill = static_cast<int>(totalBill); // Explicit type conversion to int

    cout << "Total Amount Spent: " << order.getTotalAmountSpent() << endl;
    cout << "Total Bill with 5% Tax (Rounded to Integer): " << roundedBill << endl;
    cout << "Overall Total Amount Spent (Including Tax): " << Bill::getTotalSpent() << endl;

    return 0;
}
