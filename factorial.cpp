#include <iostream>


int factorial (int n ) {
    //Base case 0! = 1;
    if(n == 0) return 1;
    //recursion call
    return n * factorial(n-1);
}

int main () {
    int n {0};
    std::cout << "Enter a number: " ;
    std::cin >> n;

    std::cout << "Factorial of " << n << " = " << factorial(n) << std::endl;

    return 0;
}