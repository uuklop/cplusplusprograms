#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    // Test cases
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    
    // Extract rightmost digits
    int digit1 = a % 10;
    int digit2 = b % 10;
    int digit3 = c % 10;
    
    // Check if any two digits match
    if (digit1 == digit2 || digit2 == digit3 || digit1 == digit3) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    
    return 0;
}