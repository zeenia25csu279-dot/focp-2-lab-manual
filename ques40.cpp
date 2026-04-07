#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, cleaned = "";
    int i, words = 0, digits = 0, special = 0;
    bool inWord = false, valid = true;

    cout << "Enter a string: ";
    getline(cin, str);

    // Remove leading, trailing and extra spaces
    for(i = 0; i < str.length(); i++) {
        if(str[i] != ' ') {
            cleaned += str[i];
        } else {
            if(cleaned.length() > 0 && cleaned[cleaned.length()-1] != ' ')
                cleaned += ' ';
        }
    }

    if(cleaned.length() > 0 && cleaned[cleaned.length()-1] == ' ')
        cleaned.erase(cleaned.length()-1, 1);

    // Convert to sentence case
    for(i = 0; i < cleaned.length(); i++) {
        if(i == 0 && cleaned[i] >= 'a' && cleaned[i] <= 'z')
            cleaned[i] = cleaned[i] - 32;
        else if(i > 0 && cleaned[i] >= 'A' && cleaned[i] <= 'Z')
            cleaned[i] = cleaned[i] + 32;
    }

    // Count words, digits, special chars + validation
    for(i = 0; i < cleaned.length(); i++) {
        char ch = cleaned[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if(!inWord) {
                words++;
                inWord = true;
            }
        }
        else if(ch >= '0' && ch <= '9') {
            digits++;
            inWord = false;
        }
        else if(ch == ' ') {
            inWord = false;
        }
        else {
            special++;
            valid = false;
            inWord = false;
        }
    }

    cout << "Final String = " << cleaned << endl;
    cout << "Total Words = " << words << endl;
    cout << "Total Digits = " << digits << endl;
    cout << "Total Special Characters = " << special << endl;

    if(valid)
        cout << "Valid: String contains only alphabets, digits and spaces";
    else
        cout << "Invalid: String contains special characters";

    return 0;
}