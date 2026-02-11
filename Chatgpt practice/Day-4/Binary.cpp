// BINARY SEARCH

// Binary Search is a searching algorithm that finds 
// an element in a sorted array by repeatedly dividing
// the search space into two halves.

// if not sorted → Binary Search will fail

// Array:  [10, 20, 30, 40, 50]
// Target: 30
// Steps:

// Find the middle

// Compare middle with target
// If equal → done
// If target is smaller → go left
// If target is larger → go right

// elements shloud be in monotonic fuction 
// Repeat until found or range becomes invalid


#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int low = 0;
    int high = n-1;

}
