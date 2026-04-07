#include <iostream>
using namespace std;

int main() {
    int a[5], i, evenSum = 0, oddSum = 0;

    for(i = 0; i < 5; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> a[i];
    }

    for(i = 0; i < 5; i++) {
        if(a[i] % 2 == 0)
            evenSum += a[i];
        else
            oddSum += a[i];
    }

    cout << "Sum of even numbers = " << evenSum << endl;
    cout << "Sum of odd numbers = " << oddSum << endl;

    return 0;
}