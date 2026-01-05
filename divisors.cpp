#include <iostream>

int main()
{
    // taking input from user
    int num{0};
    int count{0};
    std::cout << "Enter a number : ";
    std::cin >> num;

    // Print divisors
    std::cout << "Divisors : ";
    for (int i = 1; i <= num; i++)
    {
        // Check for divisors
        if (num % i == 0)
        {
            std::cout << i << " ";
            count++;
        }
    }

    std::cout << "\nNumber of divisors = " << count << std::endl;

    return 0;
}