class Solution {
public:
    bool isPalindrome(int x) {
        int dig = 0, orgNum = x;
        long reverse = 0;
        if (x < 0)
            return false;
        while (x) {
            dig = x%10;
            reverse = (reverse*10) + dig;
            x = x/10;
        }
            return (orgNum == reverse);
    }
};