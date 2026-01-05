#include <iostream>

int main () {
    //taking input from user
    int num{ 0 };
    std::cout << "Enter a number : " ;
    std::cin >> num;

    int reverse = 0;
    while(num > 0) {
        //Extract last digit and add to the reverse
        reverse = (reverse * 10) + (num%10);

        //Update num
        num /= 10;
    }

    //Print reverse
    std::cout << reverse;

    return 0;
}