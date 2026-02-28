// Sorting  
// Sorting means arranging data in specific order to make it easy to use 
// 1. Ascending order - (1,2,3,4,5)
// 2. Descending order - (9,3,2,1)

// BUBBLE SORT

// It sorts by comparing adjacent elements 
// Swapping them if they are in the wrong order 
// After each full pass -> largest element moves to end 

// ➤ Pass 1

// Compare 5 and 1 → swap
// 1 5 4 2

// Compare 5 and 4 → swap
// 1 4 5 2

// Compare 5 and 2 → swap
// 1 4 2 5

// Largest element (5) fixed at end.

// ➤ Pass 2

// Compare 1 and 4 → no swap
// Compare 4 and 2 → swap

// 1 2 4 5

// 4 is fixed now.

// ➤ Pass 3

// Compare 1 and 2 → no swap
// No swaps at all → already sorted.

// Final array:

// 1 2 4 5

// there are 4 elements originally but the 4th one
// falls inpace by itself


#include<iostream>
using namespace std;

