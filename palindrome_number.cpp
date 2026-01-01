#include <iostream>   // For input and output
using namespace std;

int main() {
    int n;  // Original number
    cout << "Enter a number: ";
    cin >> n;

    int temp = n;        // Store original number for comparison
    int reversed = 0;    // To store the reversed number

    // Reverse the number
    while (temp != 0) {
        int digit = temp % 10;          // Get last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
        temp /= 10;                     // Remove last digit
    }

    // Check if original number is equal to reversed number
    if (n == reversed) {
        cout << n << " is a Palindrome number." << endl;
    } else {
        cout << n << " is NOT a Palindrome number." << endl;
    }

    return 0;  // Program ends successfully
}
