
#include <iostream>

// Brute Force TC ~ O(N)
// int main()
// {
//     int N;
//     std::cout << "Enter a number : ";
//     std::cin >> N;

//     int exponentiation;
//     std::cout << "Enter power : ";
//     std::cin >> exponentiation;

//     int power = 1;
//     for (int i = 1; i <= exponentiation; i++)
//     {
//         power *= N;
//     }
//     std::cout << N << "^" << exponentiation << " = " << power << std::endl;

//     return 0;
// }

// Optimal Solution TC ~ O(log₂(N))

#include <iostream>

int main()
{
    // Input from user
    int N;
    std::cout << "Enter a number : ";
    std::cin >> N;
    int power;
    std::cout << "Enter power : ";
    std::cin >> power;

    // Any number raised to power 0 = 1
    int ans = 1;
    while (power > 0)
    {
        if (power % 2 != 0)
        {
            power -= 1;
            ans *= N;
        }
        power /= 2;
        N *= N;
    }
    std::cout << ans << std::endl;
    return 0;
}