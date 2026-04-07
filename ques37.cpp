#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    int i, valid = 1;

    cout << "Enter username: ";
    cin >> username;

    for(i = 0; i < username.length(); i++) {
        if(!((username[i] >= 'A' && username[i] <= 'Z') ||
             (username[i] >= 'a' && username[i] <= 'z') ||
             (username[i] >= '0' && username[i] <= '9') ||
             username[i] == '_')) {
            valid = 0;
            break;
        }
    }

    if(valid)
        cout << "Valid Username";
    else
        cout << "Invalid Username";

    return 0;
}