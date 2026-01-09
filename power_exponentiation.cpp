
#include <iostream>

// Brute Force TC ~ O(N)
int main()
{
    int N;
    std::cout << "Enter a number : ";
    std::cin >> N;

    int exponentiation;
    std::cout << "Enter power : ";
    std::cin >> exponentiation;

    int power = 1;
    for (int i = 1; i <= exponentiation; i++)
    {
        power *= N;
    }
    std::cout << N << "^" << exponentiation << " = " << power << std::endl;

    return 0;
}