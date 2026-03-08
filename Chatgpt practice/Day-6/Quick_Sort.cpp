// Quick Sort is one of the fastest and most widely used
//  sorting algorithms. It follows the Divide and 
//  Conquer strategy.


// Divide the problem into smaller parts

// Solve the smaller parts
// Combine the results
// Quick Sort does this by using something called a pivot.

// Step 1 — Pick a Pivot

// Choose an element from the array called the pivot.
// Common choices:
// First element
// Last element
// Middle element
// Random element
// Most basic implementations use the last element as pivot.

// Step 2 — Partition the Array

// Rearrange the array so that:
// Smaller elements  | Pivot |  Larger elements

// Meaning:
// All numbers less than pivot go to the left
// All numbers greater than pivot go to the right
// This process is called partitioning.

// Step 3 — Recursively Sort

// After partition:
// Left Subarray  | Pivot |  Right Subarray
// Now apply Quick Sort again to:
// Left subarray
// Right subarray
// Until the array becomes completely sorted.

#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[], int low, int high){ // Partition declaration
    int pivot = arr[high]; //We choose the last element of the array as pivot.
    int i = low -1;  //i tracks the position of smaller elements.
// Array: [5,2,4,1]
// low = 0

// i = -1

    for(int j = low; j<high; j++){ //This loop scans the array from left to right.
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the value of each element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr.data(),0,n-1);
    cout<<"Sorted array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    } 

}
