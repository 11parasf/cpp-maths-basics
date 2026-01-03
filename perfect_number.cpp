#include <iostream>   // For input and output
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;  // To store sum of proper divisors

    // Find all proper divisors of the number
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if the number is perfect
    if (sum == n && n != 0) {
        cout << n << " is a Perfect Number." << endl;
    } else {
        cout << n << " is NOT a Perfect Number." << endl;
    }

    return 0;  // Program ends successfully
}
