#include <iostream>

using namespace std;

// Define a structure
struct Student {
    char name[50];
    int age;
};

int main() {
    // Dynamically allocate memory for a Student structure
    Student* studentPtr = new Student;

    // Take user input for the structure's members
    cout << "Enter student's name: ";
    cin.getline(studentPtr->name, 50);
    
    cout << "Enter student's age: ";
    cin >> studentPtr->age;

    // Display the inputted data
    cout << "\nStudent Information:" << endl;
    cout << "Name: " << studentPtr->name << endl;
    cout << "Age: " << studentPtr->age << endl;

    // Deallocate the memory
    delete studentPtr;

    return 0;
}
