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