#include <iostream>
#include <string>
#include <algorithm> // for reverse

using namespace std;

// Function to remove a specific character from a string
string removeCharacter(const string &str, char ch) {
    string result;
    for (char c : str) {
        if (c != ch) {
            result += c;
        }
    }
    return result;
}

int main() {
    // Test cases
    string test1 = "Filename";
    string test2 = "Compilation Time";
    
    // Remove 'e' from "Filename"
    string result1 = removeCharacter(test1, 'e');
    cout << "Updated string: " << result1 << endl; // "Filnam"
    
    // Remove 'i' from "Compilation Time"
    string result2 = removeCharacter(test2, 'i');
    cout << "Updated string: " << result2 << endl; // "Complaton Tme"
    
    // Reverse the strings
    reverse(result1.begin(), result1.end());
    reverse(result2.begin(), result2.end());
    
    cout << "Reversed result1: " << result1 << endl;
    cout << "Reversed result2: " << result2 << endl;
    
    // Print the size of the strings
    cout << "Size of result1: " << result1.size() << endl;
    cout << "Size of result2: " << result2.size() << endl;
    
    return 0;
}
