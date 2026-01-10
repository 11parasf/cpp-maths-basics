#include <iostream>
#include <vector>

int main()
{
    // Take Input from User
    int n;
    std::cout << "Enter a number :  ";
    std::cin >> n;

    // Precomputation
    std::vector<int> arr(n + 1, 1);

    for (int i = 2; i < n; i++)
    {
        if (arr[i] == 1)
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                arr[j] = 0;
            }
        }
    }

    // Print Prime numebrs
    std::cout << "Prime numbers till N : [";
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 1)
        {
            std::cout << i << ", ";
        }
    }
    std::cout << "]";
    return 0;
}