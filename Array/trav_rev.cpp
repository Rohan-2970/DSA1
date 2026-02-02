// Why Arrays Are Important in DSA

// Base structure for strings, matrices, stacks, queues
// Used in searching and sorting
// Required for sliding window, prefix sum, two pointers

// Searching:

// Linear Search
// Binary Search

// Sorting

// Bubble Sort
// Selection Sort
// Insertion Sort
// Merge Sort
// Quick Sort
// Heap Sort

// 3. Array Traversal

// Array traversal means visiting each element of 
// the array exactly once to perform operations like 
// printing, summing, or checking conditions.

#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" number of elements: \n";
    for(int i=0;i<n; i++){
        cout<<arr[i]<<endl;
    }
    // Forward Traversal
    cout<<"\nForward Traversal: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // Reverse Traversal
    cout<<"\nReverse Traversal: ";
    for(int i = n-1; i>=0;i--){
        cout<<arr[i]<<" ";
    }
}