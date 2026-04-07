#include <iostream>
using namespace std;

int main() {
    int a[3][3], i, j;

    cout << "Enter matrix:\n";
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Transpose matrix:\n";
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }

    return 0;
}