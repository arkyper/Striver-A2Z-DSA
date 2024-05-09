// Given two integers A and B. Your task is to return their product.

// Example 1:
// Input:
// A = 1, B = 2
// Output:
// 2
// Explanation:
// Multiplication of 1 and 2 is 2.


//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int multiplication(int A, int B){
        // code here 
        return A*B;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.multiplication(A,B) << endl;
    }
    return 0; 
} 

// } Driver Code Ends