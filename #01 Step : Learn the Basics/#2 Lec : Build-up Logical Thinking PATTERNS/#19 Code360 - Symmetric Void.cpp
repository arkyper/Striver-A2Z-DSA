// Problem statement
// Sam is curious about symmetric patterns, so he decided to create one.
// For every value of ‘N’, return the symmetry as shown in the example.

// Example:
// Input: ‘N’ = 3
// Output: 
// * * * * * * 
// * *     * * 
// *         * 
// *         * 
// * *     * * 
// * * * * * * 

// Sample Input 1:
// 3
// Sample Output 1:
// * * * * * * 
// * *     * * 
// *         * 
// *         * 
// * *     * * 
// * * * * * * 

// Sample Input 2 :
// 1
// Sample Output 2 :
// * * 
// * * 

// Constraints :
// 1  <= N <= 25
// Time Limit: 1 sec


void symmetry(int n) {
    // Write your code here.
    for (int i = 1; i <= n; i++) {                                  // Top-half 
        for (int j = n; j >= i; j--) {                                // Stars + Spaces -> First Triangle
            cout << "* ";
        }
        for (int k = 1; k < i; k++) {                               // Pure Spaces -> Second Triangle
            cout << "    ";
        }
        for (int l = n; l >= i; l--) {                                // Stars + Spaces -> Third Triangle
            cout << "* ";
        }
        cout << "\n";
    }
    for (int i = n; i >= 1; i--) {                                   // Bottom-half 
        for (int j = n; j >= i; j--) {                                // Stars + Spaces -> First Triangle
            cout << "* ";
        }
        for (int k = 1; k < i; k++) {                               // Pure Spaces -> Second Triangle
            cout << "    ";
        }
        for (int l = n; l >= i; l--) {                                // Stars + Spaces -> Third Triangle
            cout << "* ";
        }
        cout << "\n";
    }
}