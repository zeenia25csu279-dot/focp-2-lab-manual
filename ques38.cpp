#include <iostream>
#include <string>
using namespace std;

int main() {
    string pass;
    int i;
    bool upper = false, lower = false, digit = false, special = false;

    cout << "Enter password: ";
    cin >> pass;

    for(i = 0; i < pass.length(); i++) {
        if(pass[i] >= 'A' && pass[i] <= 'Z')
            upper = true;
        else if(pass[i] >= 'a' && pass[i] <= 'z')
            lower = true;
        else if(pass[i] >= '0' && pass[i] <= '9')
            digit = true;
        else if(pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' ||
                pass[i]=='!' || pass[i]=='&' || pass[i]=='*')
            special = true;
    }

    if(upper && lower && digit && special)
        cout << "Strong Password";
    else
        cout << "Weak Password";

    return 0;
}