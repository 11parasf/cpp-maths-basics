#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    /* Function to count the 
    number of digits in N */
    int countDigit(int n) {
        int count = log10(n) + 1;
        return count;
    }
    
public:
    /* Function to find whether the
    number is Armstrong or not */
    bool isArmstrong(int n) {
        
        // Store the count of digits
        int count = countDigit(n);
        
        // Variable to store the sum
        int sum = 0;
        
        // Variable to store the copy
        int copy = n;
        
        /* Iterate through each
        digit of the number */
        while(n > 0){
            
            // Extract the last digit
            int lastDigit = n % 10;
            
            // Update sum
            sum += pow(lastDigit, count); 
            
            /* Remove the last digit
             from the number */
            n = n / 10;
        }
        
        /* Check if the sum of digits raised to the
        power of k equals the original number */
        if(sum == copy) return true;
        return false;
    }
};

int main() {
    int n = 153;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    /* Function call to find whether the
     given number is Armstrong or not */
    bool ans = sol.isArmstrong(n);
    
    if(ans) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    
    return 0;
}