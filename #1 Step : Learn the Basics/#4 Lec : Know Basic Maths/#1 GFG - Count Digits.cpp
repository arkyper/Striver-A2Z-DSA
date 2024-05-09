// Given a number N. Count the number of digits in N which evenly divide N.
// Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.

// Example 1:
// Input:
// N = 12
// Output:
// 2
// Explanation:
// 1, 2 both divide 12 evenly

// Example 2:
// Input:
// N = 23
// Output
// 0
// Explanation:
// 2 and 3, none of them
// divide 23 evenly

// Expected Time Complexity: O(log N)
// Expected Space Complexity: O(1)



//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
    int count = 0, digit = 0, orgNum = N;
	while (N > 0) {
		digit = N%10;		// Extracting Digits
		if (digit != 0 && orgNum%digit == 0)		// Checking if the Digit is 0 & If Number is completely Divisible by Digit
			count++;		// Increasing Count
		N = N/10;			// Updating number
	}
	return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends