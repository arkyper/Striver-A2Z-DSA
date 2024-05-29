// Problem statement
// Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.
// An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.
// For every value of ‘N’, help sam to return the corresponding Alpha-Hill.

// Example:
// Input: ‘N’ = 3
// Output: 
//     A
//   A B A
// A B C B A

// Sample Input 1:
// 3
// Sample Output 1:
//     A
//   A B A
// A B C B A

// Sample Input 2 :
// 1
// Sample Output 2 :
// A

// Constraints :
// 1  <= N <= 25
// Time Limit: 1 sec


void alphaHill(int n) {
    // Write your code here.
    // char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = n-i; j > 0; j--) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << (char(j+64)) << " ";
        }
        for (int k = i-1; k >= 1; k--) {
            cout << (char(k+64)) << " ";
        }
        cout << endl;
    }
}