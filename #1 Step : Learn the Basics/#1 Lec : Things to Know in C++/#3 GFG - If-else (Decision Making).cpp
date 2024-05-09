// Given two integers, n and m. The task is to check the relation between n and m.

// Example 1:
// Input:
// n = 4
// m = 8
// Output: lesser
// Explanation:
// 4 < 8 so print 'lesser'.

// Example 2:
// Input:
// n = 8
// m = 8
// Output: equal
// Explanation:
// 8 = 8 so print 'equal'.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string compareNM(int n, int m){
        // code here
        if (n > m) 
            return "greater";
        else if (n < m) 
            return "lesser";
        else 
            return "equal";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    }
    return 0;
}
// } Driver Code Ends