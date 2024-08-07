// Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

// Example 1:
// Input:
// n=5
// Output:
// 225
// Explanation:
// 13+23+33+43+53=225

// Example 2:
// Input:
// n=7
// Output:
// 784
// Explanation:
// 13+23+33+43+53+63+73=784

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function sumOfSeries() which takes the integer n as a parameter and returns the sum of the cubes of the first n natural numbers.

// Expected Time Complexity: O(1)
// Expected Auxillary Space: O(1)

// Constraints:
// 1<=n<=50000


//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        if (n < 1)
            return 0;
        return n*n*n + sumOfSeries(--n);        // Here POST Decrement won't work
        
        // long long ans = (n*(n+1)/2) * (n*(n+1)/2);
        // return (n*(n+1)/2) * (n*(n+1)/2);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends