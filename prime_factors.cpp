#include <iostream>

// Check Prime TC- 0(n)
bool isPrime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        return true;
    return false;
}

int main()
{
    // User Input
    int n;
    std::cout << "Enter a number :";
    std::cin >> n;

    // Prime factors TC - 0(n)
    std::cout << "Prime factors : ";
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (isPrime(i))
            {
                std::cout << i << ", ";
            }
        }
    }

    return 0;
}
