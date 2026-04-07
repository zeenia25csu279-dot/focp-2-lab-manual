#include <iostream>
using namespace std;

int main() {
    int qty;
    float price, total, discount = 0, net;

    cout << "Enter quantity: ";
    cin >> qty;
    cout << "Enter price per item: ";
    cin >> price;

    total = qty * price;

    if(qty > 1000)
        discount = total * 10 / 100;

    net = total - discount;

    cout << "Total = " << total << endl;
    cout << "Discount = " << discount << endl;
    cout << "Net Amount = " << net << endl;

    return 0;
}