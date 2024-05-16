// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

// Example 1:
// Input: x = 123
// Output: 321

// Example 2:
// Input: x = -123
// Output: -321

// Example 3:
// Input: x = 120
// Output: 21



class Solution {
public:
    int reverse(int x) {
        long reverse = 0;
        int dig = 0;
        while (x) {
            dig = x%10;     // Extracting Digit of a number
            reverse = (reverse*10) + dig;       // Appending that digit into a variable
            x /= 10;        // Updating original number
        }
        if (reverse > INT_MAX || reverse < INT_MIN)     // Checking if that variable is in Range
                return 0;
        return reverse;
    }
};