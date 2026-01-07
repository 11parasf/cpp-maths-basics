#include <iostream>

int main()
{
    int num = 0;
    std::cout << "Enter a number : ";
    std::cin >> num;

    // Brute Force TC - O(num)
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {

            count += 1;
        }
    }
    if (count == 2)
    {
        std::cout << num << " is a prime number" << std::endl;
    }
    else
    {
        std::cout << num << " is not a prime number." << std::endl;
    }

    // Optimal Solution TC- O(sqrt(num))
    count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count += 1;
            if (num / i != i)
            {
                count += 1;
            }
            if (count > 2)
            {
                break;
            }
        }
    }
    if (count == 2)
    {
        std::cout << num << " is a prime number" << std::endl;
    }
    else
    {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}