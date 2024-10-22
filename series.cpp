#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

int main() {
    int n;
    double sum = 0.0, term = 1.2;  // Start with 1.2
    
    cout << "Input the last integer between 1 to 98 without fraction you want to add: ";
    cin >> n;
    
    // Display the series
    cout << term;
    sum += term;
    
    for (int i = 2; i <= n; i++) {
        term += 1.1;  // Each term increases by 1.1
        cout << " + " << fixed << setprecision(1) << term;
        sum += term;
    }
    
    cout << endl << "The sum of the series = " << fixed << setprecision(2) << sum << endl;
    
    return 0;
}