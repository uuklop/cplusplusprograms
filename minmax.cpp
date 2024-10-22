#include <iostream>

using namespace std;

// Recursive function to find the maximum element in the array
int findMax(int arr[], int n) {
    // Base case: If the array has only one element
    if (n == 1) {
        return arr[0];
    }
    // Recursive call: Compare the last element with the maximum of the remaining array
    return max(arr[n-1], findMax(arr, n-1));
}

// Recursive function to find the minimum element in the array
int findMin(int arr[], int n) {
    // Base case: If the array has only one element
    if (n == 1) {
        return arr[0];
    }
    // Recursive call: Compare the last element with the minimum of the remaining array
    return min(arr[n-1], findMin(arr, n-1));
}

int main() {
    // Example array
    int arr[] = {1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find the maximum and minimum elements using recursion
    int maxElement = findMax(arr, n);
    int minElement = findMin(arr, n);

    // Output the results
    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;

    return 0;
}
