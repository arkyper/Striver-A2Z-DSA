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