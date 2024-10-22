#include <iostream>

using namespace std;

// Recursive function to calculate the product of two numbers
int multiply(int a, int b) {
    // Base case: If b is 0, the product is 0
    if (b == 0) {
        return 0;
    }

    // If b is positive, add 'a' recursively 'b' times
    if (b > 0) {
        return a + multiply(a, b - 1);
    }

    // If b is negative, reverse the signs and continue recursion
    return -multiply(a, -b);
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate the product using recursion
    int result = multiply(num1, num2);

    // Output the result
    cout << "Product of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
