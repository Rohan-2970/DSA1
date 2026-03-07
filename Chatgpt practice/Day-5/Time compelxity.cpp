// Proper TimeComplexity 


// 1️⃣ Single Loop

// If a loop runs n times, the time complexity is:
// T(n)=O(n)

// Example:
// for i in range(n):
//     print(i)           ------   T(n)=n


// 2️⃣ Nested Loops

// If two loops each run n times:
// T(n)=O(n2)

// Example:
// for i in range(n):
//     for j in range(n):
//         print(i, j)


// 3️⃣ Logarithmic Complexity

// When the problem size reduces by half each step.
// Formula:
// T(n)=O(logn)

// Example: Binary Search
// while left <= right:
//     mid = (left + right) // 2


// Divide and Conquer Formula

// Used for algorithms like Merge Sort, Quick Sort, Karatsuba.
// General recurrence formula:

// T(n)=aT(n/b)+f(n)

// Where:

// a = number of subproblems
// b = size reduction factor
// f(n) = work done outside recursion


// Example: Merge Sort
// Merge Sort splits array into 2 parts.

// T(n)=2T(n/2)+O(n)

// Solution:
// T(n)=O(nlogn)

