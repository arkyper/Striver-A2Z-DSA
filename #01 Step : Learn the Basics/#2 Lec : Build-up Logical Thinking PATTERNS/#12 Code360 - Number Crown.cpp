// Problem statement 
// Aryan and his friends are very fond of the pattern. They want to make the Reverse N-Number Crown for a given integer' N'.
// Given 'N', print the corresponding pattern.

// Example:
// Input: ‘N’ = 3
// Output: 
// 1         1
// 1 2     2 1
// 1 2 3 3 2 1

// Sample Input 1:
// 3
// Sample Output 1:
// 1         1
// 1 2     2 1
// 1 2 3 3 2 1

// Sample Input 2 :
// 4
// Sample Output 2 :
// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1

// Sample Input 3 :
// 7
// Sample Output 3 :
// 1                         1
// 1 2                     2 1
// 1 2 3                 3 2 1
// 1 2 3 4             4 3 2 1
// 1 2 3 4 5         5 4 3 2 1
// 1 2 3 4 5 6     6 5 4 3 2 1
// 1 2 3 4 5 6 7 7 6 5 4 3 2 1  

// Constraints :
// 1  <= N <= 20
// Time Limit: 1 sec



void numberCrown(int n) {
    // Write your code here.
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {                  // Printing First Triangle of Numbers
            cout << j << " ";
        }
        for (int k = i-1; k > 0; k--) {               // Printing Second Triangle of Spaces
            cout << " ";
        } 
        for (int l = i; l > 0; l--) {                  // Printing Third Triangle of Numbers
            cout << l << " ";
        }
        cout << "\n";
    }
}