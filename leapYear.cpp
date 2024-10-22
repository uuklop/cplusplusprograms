#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year1, year2;
    bool foundLeapYear = false;
    
    cout << "Enter two years (between 1 and 3000): ";
    cin >> year1 >> year2;
    
    // Ensure year1 is less than or equal to year2
    if (year1 > year2) {
        swap(year1, year2);
    }
    
    // Validate input range
    if (year1 < 1 || year2 > 3000) {
        cout << "Years must be between 1 and 3000." << endl;
        return 1;
    }
    
    cout << "Leap years between " << year1 << " and " << year2 << ":" << endl;
    
    for (int year = year1; year <= year2; year++) {
        if (isLeapYear(year)) {
            cout << year << " ";
            foundLeapYear = true;
        }
    }
    
    if (!foundLeapYear) {
        cout << "No leap years found in the given range.";
    }
    
    cout << endl;
    return 0;
}