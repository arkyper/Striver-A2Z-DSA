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