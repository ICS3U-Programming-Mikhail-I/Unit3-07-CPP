// Copyright 2025 Mikhail Ibrahim
// Date: Mar 27, 2025
// Description: A C++ program to determine
// if you can date a grandchild based on age criteria.

#include <iostream>  // For input and output
#include <limits>    // For input validation

// Constants for age boundaries
const int MIN_AGE = 25;  // Minimum approved age
const int MAX_AGE = 40;  // Maximum approved age

int main() {
    int age;

    // Ask the user for their age
    std::cout << "Please enter your age: ";

    // Input and error handling
    if (std::cin >> age) {
        // Check if the age is within the approved range using logical AND
        if (age > MIN_AGE && age < MAX_AGE) {
            std::cout << "You can date their grandchild." << std::endl;
        } else {
            std::cout << "You cannot date their grandchild." << std::endl;
        }
    } else {
        std::cout << "Invalid input, please enter a valid age." << std::endl;
        std::cin.clear();  // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Print the closing message
    std::cout << "Thanks for playing." << std::endl;
    // End message for the user

    return 0;
}
