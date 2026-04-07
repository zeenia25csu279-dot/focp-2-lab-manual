#include <iostream>
using namespace std;

int main() {
    int itemNo, quantity;
    float unitPrice, amount, discount, netBill;

    cout << "Enter Item Number: ";
    cin >> itemNo;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Unit Price: ";
    cin >> unitPrice;

    amount = quantity * unitPrice;
    discount = amount * 0.20;
    netBill = amount - discount;

    cout << "\n----- BILL DETAILS -----" << endl;
    cout << "Item Number   : " << itemNo << endl;
    cout << "Quantity      : " << quantity << endl;
    cout << "Unit Price    : " << unitPrice << endl;
    cout << "Total Amount  : " << amount << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Net Bill      : " << netBill << endl;

    return 0;
}