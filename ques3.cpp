#include <iostream>
using namespace std;

int main() {
    int choice;
    float celsius, fahrenheit;

    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;

        celsius = (fahrenheit - 32) * 5 / 9;

        cout << "Temperature in Celsius = " << celsius;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        fahrenheit = (celsius * 9 / 5) + 32;

        cout << "Temperature in Fahrenheit = " << fahrenheit;
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}