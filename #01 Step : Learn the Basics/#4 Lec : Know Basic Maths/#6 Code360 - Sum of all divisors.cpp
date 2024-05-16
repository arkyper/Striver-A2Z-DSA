// Problem statement
// You are given an integer ‘n’.
// Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.
// Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.

// Example:
// Input: ‘n’  = 5
// Output: 21

// Explanation:
// We need to find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to 5. 
// ‘sumOfDivisors(1)’ = 1
// ‘sumOfDivisors(2)’ = 2 + 1 = 3
// ‘sumOfDivisors(3)’ = 3 + 1 = 4
// ‘sumOfDivisors(4)’ = 4 + 2 +1 = 7 
// ‘sumOfDivisors(5)’ = 5 + 1 = 6
// Therefore our answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) + sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21.

// Sample Input 1:
// 3
// Sample Output 1:
// 8

// Explanation of sample output 1:
// We need to find sumOfDivisors(1) + sumOfDivisors(2) +sumOfDivisors(3).
// sumOfDivisors(1) = 1
// sumOfDivisors(2) = 2 + 1 = 3
// sumOfDivisors(3) = 3 + 1 = 4
// Therefore, the answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) = 1 + 3 + 4 = 8. 

// Sample Input 2:
// 10
// Sample Output 2:
// 87

// Expected Time Complexity:
// Try to solve this in O(sqrt(‘n’)).


int sumOfAllDivisors(int n){
	// Write your code here.
	int sum = 0;
        // for (int i = 1; i <= n; i++) {           // BruteForce Approach
        // 	for (int j = 2; j <= i/2; j++) {
        // 		if (i%j==0)
        // 			sum +=j;
        // 	}
        // 	if (i == 1)
        // 		sum += i;
        // 	else
        // 		sum = sum + i + 1;
		// }

    for (int i = 1; i <= n; i++) {
	    sum += i*(n/i);
	}
	return sum;
}


// OPTIMAL APPROACH
// Suppose we are given N = 5
// Now we have to find factors of 1, 2,3,4,5 that will be 
// f1 = 1, f2 = 1 + 2 , f3 = 1 + 3, f4 = 1+2+4, f5 = 1+5, and then we try to sum them so ans will be 
// ans  =  f1 + f2 + f3 + f4 + f5 
//      = 1 + (1 + 2) + (1 + 3) + (1 + 2 + 4) + (1 + 5)  // equals  21 
// now club alike terms = (1x5) + (2x2) + (3x1) + (4x1)+(5x1) // remains 21
// now this part does the main trick  and here I will do some rewriting as 
//     = (1 x (5/1) ) + (2 x(5/2)) + (3x(5/3)) + (4 x (5/4)) + (5x(5/5))  //still remains 21
// # here I am doing floor division so example 3/2 = 1 and 7/3 =2
// You can See answer remains same so here is our pattern that for any N 
// ans = (1 x (N/1)) + (2 x (N/2)) + (3x(N/3)) + ... + (Nx(N/N)) 
// # apply this on some value of N and it may become more clear 
// this is O(N) solution