#include <iostream>

// Optimal Solution
void divisors(int num)
{
    std::cout << "Divisors : " << " ";
    // Loop till sqrt(num)
    for (int i = 0; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            std::cout << i << " ";
            // Edge case
            if (num / i != i)
            {
                std::cout << num / i << " ";
            }
        }
    }
}

int main()
{
    // taking input from user
    int num{0};
    int count{0};
    std::cout << "Enter a number : ";
    std::cin >> num;

    divisors(num);

    // Brute Force Solution
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