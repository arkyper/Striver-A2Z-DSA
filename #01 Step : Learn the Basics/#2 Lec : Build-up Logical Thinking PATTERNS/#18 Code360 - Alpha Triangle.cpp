// Problem statement
// Sam is researching on Alpha-Triangles. So, he needs to create them for different integers ‘N’.
// An Alpha-Triangle is represented by the triangular pattern of alphabets in reverse order.
// For every value of ‘N’, help sam to print the corresponding Alpha-Triangle.

// Example:
// Input: ‘N’ = 3
// Output: 
// C
// C B 
// C B A

// Sample Input 1:
// 3
// Sample Output 1:
// C
// C B 
// C B A

// Sample Input 2 :
// 1
// Sample Output 2 :
// A

// Constraints :
// 1  <= N <= 25
// Time Limit: 1 sec


void alphaTriangle(int n) {
    // Write your code here.
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= i; j--) {
            cout << (char(64+j)) << " ";
        }
        cout << endl;
    }
}