// A number n is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
// Given a number n, the task is to return the list/vector of the factorial numbers smaller than or equal to n.

// Examples:
// Input: n = 3
// Output: 1 2
// Explanation: The first factorial number is 1 which is less than equal to n. The second number is 2 which is less than equal to n,but the third factorial number is 6 which is greater than n. So we print only 1 and 2.

// Input: n = 6
// Output: 1 2 6
// Explanation: The first three factorial numbers are less than equal to n but the fourth factorial number 24 is greater than n. So we print only first three factorial numbers.
// Expected Time Complexity: O(k), Where k is the number of factorial numbers.
// Expected Auxiliary Space: O(1)

// Constraints:
// 1<=n<=1018



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        // vector<long long> factorialVector;
        // long long fact = 1;
        // for (int i = 1; i <= N; i++) {
        //     fact = fact * i;
        //     if (fact <= N && fact >= 1)
        //         factorialVector.push_back(fact);
        // }
        // return factorialVector;
        
        vector<long long> factorialVector;
        long long factorial = 1;
        int itr = 1;
        while (factorial <= N) {
            factorialVector.push_back(factorial);
            itr++;
            factorial = factorial*itr;
        }
        return factorialVector;
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
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends