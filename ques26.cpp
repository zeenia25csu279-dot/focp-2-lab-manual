#include <iostream>
using namespace std;

int main() {
    int marks[5], i, total = 0;
    float percent;

    for(i = 0; i < 5; i++) {
        cout << "Enter marks of subject " << i+1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percent = total / 5.0;

    cout << "Total = " << total << endl;
    cout << "Percentage = " << percent << "%";

    return 0;
}