#include <iostream>
using namespace std;

int main() {
    float price[10], max;
    int i;

    for(i = 0; i < 10; i++) {
        cout << "Enter price " << i+1 << ": ";
        cin >> price[i];
    }

    max = price[0];

    for(i = 1; i < 10; i++) {
        if(price[i] > max)
            max = price[i];
    }

    cout << "Maximum price = " << max;

    return 0;
}