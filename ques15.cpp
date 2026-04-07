#include <iostream>
using namespace std;

int main() {
    int n, i, num, max;
    cout << "Enter how many numbers: ";
    cin >> n;

    cout << "Enter number 1: ";
    cin >> max;

    for(i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if(num > max)
            max = num;
    }

    cout << "Largest number = " << max;

    return 0;
}