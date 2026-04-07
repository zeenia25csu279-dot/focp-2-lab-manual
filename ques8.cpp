#include <iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter N: ";
    cin >> n;

    for(i = 1; i <= n; i++) {
        if(i % 3 == 0 && i % 5 == 0)
            cout << i << " = BuzzFuzz" << endl;
        else if(i % 3 == 0)
            cout << i << " = Buzz" << endl;
        else if(i % 5 == 0)
            cout << i << " = Fuzz" << endl;
        else
            cout << i << endl;
    }

    return 0;
}