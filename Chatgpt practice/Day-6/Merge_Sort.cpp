// Why Do We Need Better Sorting?

// Bubble Sort Selection Sort Insertion Sort
// O(n2) --> n2=1000002=10,000,000,000

//Modern systems (Google, Amazon, databases) use:
// O(nlogn)

// 2️⃣ Divide and Conquer Concept
// 1️⃣ Divide the problem into smaller parts
// 2️⃣ Solve each part recursively
// 3️⃣ Combine the results

// [8,3,6,2]
// [8,3]   [6,2]
// [8] [3]   [6] [2]

// Algorithm      Purpose
// Binary Search  searching
// Merge Sort     sorting
// Quick Sort     sorting
// Karatsuba      multiplication
// Strassen       matrix multiplication

//MERGE SORT 

// Split array into two halves
// Recursively sort both halves
// Merge the sorted halves

//         [5 2 4 1]
//        /        \
//     [5 2]      [4 1]
//    /   \       /   \
//  [5]  [2]   [4]   [1]

//  Merge:
//    [2 5]      [1 4]

//  Final:
//     [1 2 4 5]

// first divide the left part 

// Psudocode:
// 