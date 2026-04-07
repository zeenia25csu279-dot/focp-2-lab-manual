#include <iostream>
using namespace std;

int main() {
    int a[5], i, largest, second;

    for(i = 0; i < 5; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> a[i];
    }

    if(a[0] > a[1]) {
        largest = a[0];
        second = a[1];
    } else {
        largest = a[1];
        second = a[0];
    }

    for(i = 2; i < 5; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << second << endl;

    return 0;
}