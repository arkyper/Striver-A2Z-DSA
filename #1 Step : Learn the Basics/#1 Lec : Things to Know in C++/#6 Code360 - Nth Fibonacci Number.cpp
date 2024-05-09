// Problem statement
// You are given an integer ‘N’, your task is to find and return the N’th Fibonacci number using matrix exponentiation.

// Since the answer can be very large, return the answer modulo 10^9 +7.

// Fibonacci number is calculated using the following formula:
// F(n) = F(n-1) + F(n-2), 
// Where, F(1) = F(2) = 1.
// For Example:
// For ‘N’ = 5, the output will be 5.

// Sample Input 1:
// 2
// 10
// 7
// Sample Output 1:
// 55
// 13
// Explanation For Sample Output 1:
// For the first test case, the 10th Fibonacci number is 55.
// For the second test case, the 7th Fibonacci number is 13.
// Sample Input 2:
// 2
// 1
// 3
// Sample Output 2:
// 1
// 2


#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n = 0, first = 1, second = 0, next = 0;
        std::cin >> n;
        if(n == 0) {
                std ::cout << "0";
        } else if(n == 1, n ==2) {
                std::cout << "1";
        } else {
                for (int i = 0; i < n; i++) {
                        next = first + second;
                        first = second;
                        second = next;
                }
                std::cout << second;
        }
}