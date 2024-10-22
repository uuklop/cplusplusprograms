#include <iostream>
#include <string>
using namespace std;

string modifyString(string str) {
   
    int len = str.length();
    
   
    int chars = (len < 3) ? len : 3;
    

    string firstChars = str.substr(0, chars);
    

    return firstChars + str + firstChars;
}

int main() {
    string input;
    
    // Test cases
    string testCases[] = {"Python", "JS", "Code"};
    
    for (const string& test : testCases) {
        cout << "Input: \"" << test << "\"" << endl;
        cout << "Output: " << modifyString(test) << endl;
    }
    
    // Optional: Allow user to enter their own string
    cout << "\nEnter your own string: ";
    getline(cin, input);
    cout << "Output: " << modifyString(input) << endl;
    
    return 0;
}
