#include <iostream>
using namespace std;

int main() {
    float salary[10], total = 0, avg;
    int i;

    for(i = 0; i < 10; i++) {
        cout << "Enter salary of employee " << i+1 << ": ";
        cin >> salary[i];
        total += salary[i];
    }

    avg = total / 10;

    cout << "Total Salary = " << total << endl;
    cout << "Average Salary = " << avg << endl;

    return 0;
}