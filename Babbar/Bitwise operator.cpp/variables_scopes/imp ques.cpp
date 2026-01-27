#include<iostream>
using namespace std;
    class Solution {
        public:
            int substractproductandsum(int n){
                int prod = 1;
                int sum = 0;
                while(n!=0){
                    int digit = n%10;
                    prod = prod*digit;
                    sum = sum +digit;
                    n=n/10;
                }
                int answer = prod - sum;
                return answer;
    }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<s.substractproductandsum(n);
}

// Question (Written Explanation)

// You are given a positive integer n.

// Your task is to:

// Find the product of all digits of n

// Find the sum of all digits of n

// Return the difference between the product and the sum

// That is:

// Answer = (product of digits of n) − (sum of digits of n)

// Input

// A single integer n

// Output

// An integer representing the difference between the product and sum of its digits

// Example 1

// Input:

// n = 234


// Steps:

// Digits: 2, 3, 4

// Product = 2 × 3 × 4 = 24

// Sum = 2 + 3 + 4 = 9

// Output: