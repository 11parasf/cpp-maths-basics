#include <iostream>

using namespace std;

int countOddDigit(int n)
{

    // Edge Case: if n = 0 then odd digit = 0
    if (n == 0)
        return 0;

    // counter variable to store number of odd digit
    int count = 0;

    while (n > 0)
    {
        // checking if the last digit is odd
        if (((n % 10) % 2) != 0)
        {
            count++;
        }

        // updatin n for next iteration
        n /= 10;
    }

    return count;
}

int main()
{
    int n = 0;
    cout << "Enter a number : ";
    cin >> n;

    // calling countOddDigit function with n
    cout << "Number of odd digit in " << n << " = " << countOddDigit(n);

    return 0;
}