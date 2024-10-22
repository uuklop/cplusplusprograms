#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    int alphabets = 0, digits = 0, spaces = 0, others = 0;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    // Count characters
    for (char c : str) {
        if (isalpha(c)) {
            alphabets++;
        } else if (isdigit(c)) {
            digits++;
        } else if (isspace(c)) {
            spaces++;
        } else {
            others++;
        }
    }
    
    // Output results
    cout << "The number of characters in the string is: " << str.length() << endl;
    cout << "The number of alphabets are: " << alphabets << endl;
    cout << "The number of digits are: " << digits << endl;
    cout << "The number of spaces are: " << spaces << endl;
    cout << "The number of other characters are: " << others << endl;
    
    return 0;
}