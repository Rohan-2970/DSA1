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

// 3 2 4 1 3
//low - starting no.   high - last element 
// mergeSort(arr, low, high){
// mid = (low + high)/2
// mergeSort()

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int l, int mid, int r){ //2️⃣ Merge Function
// l - left, r = right, mid = middle 
    int n1 = mid-l+1; //calculates size of left array.
// l = 0
// mid = 1

    int n2 = r-mid; //calculates size of right array.
// r = 3
// mid = 1    n2 = 3 - 1 = 2

    vector<int>left(n1); // creates temoprary arrays -- stores lefte half
    vector<int>right(n2); // tores right half

    for(int i=0; i<n1;i++){
        left[i] = arr[l+i];
    }
    for(int j = 0; j<n2; j++){
        right[j] = arr[mid+1+j];
    }
    int i=0,j=0,k=l; // i - lefty pointer , j - right , k - for original
// K- here we are using it as the final array 

    while(i<n1 && j<n2) //compare elements
        if(left[i] <= right[j]) 

// compare values until either of them is exhausted-can be done with while loop
            arr[k++] = left[i++];

// arr[l] = left[i];  // copy value
// l++;               // move to next position in arr
// i++;               // move to next element in left[]
// jab right ya left me samll element ho toh usko add karna hai main array me uske liye k++ = j++
// left element is smaller
        else
            arr[k++] = right[j++];
    //right element is smaller

    while(i<n1)
        arr[k++] = left[i++];
    while(j<n2)
        arr[k++] = right[j++];
}
void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = l+(r-l)/2;

        mergeSort(arr,l,mid);
        // Sort the left half

        mergeSort(arr,mid+1,r); 
        // Sort the right half

        merge(arr,l,mid,r);
// Now we combine the two sorted halves into one sorted array.
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter value of each element: ";
    for(int i = 0; i<n;i++){
        cin>>arr[i];

    }
    mergeSort(arr.data(),0,n-1);
    cout<<"Sorted Array: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}