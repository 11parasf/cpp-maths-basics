#include <iostream>   // For input and output operations
using namespace std;

int main() {
    int n;  // Variable to store the input number

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;   // To store the count of digits
    int temp = n;    // Temporary variable to manipulate the number

    // Special case: if the number is 0, it has exactly 1 digit
    if (n == 0) {
        count = 1;
    }
    else {
        // Loop runs until all digits are removed
        while (temp != 0) {
            temp /= 10;   // Remove the last digit
            count++;     // Increase digit count
        }
    }

    // Display the result
    cout << "Number of digits: " << count << endl;

    return 0;  // Program ends successfully
}
