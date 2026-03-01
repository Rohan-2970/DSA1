// Selection Sort

// We find the minimum element 
// Swap the minimum element in the arr to the
// element in the index 0 and then it will go to min elemt place 
// Then expand the sorted position one by one 

// 5 1 4 2
// ➤ Pass 1 (i = 0)
// Find smallest from index 0 to 3.

// Smallest = 1
// Swap with arr[0].
// Result:

// 1 5 4 2

// ➤ Pass 2 (i = 1)
// Find smallest from index 1 to 3.
// Smallest = 2
// Swap with arr[1].

// Result:

// 1 2 4 5

// ➤ Pass 3 (i = 2)

// Find smallest from index 2 to 3.
// Smallest = 4
// Swap with arr[2].
// Result:

// 1 2 4 5

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the elements: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the value of each element: ";
    for(int i = 0; i<n-1; i++){
        cin>>arr[i];
    }

    //Selection Sort
    for(int i = 0; i<n-1; i++){
        int MinIndex = i; // giving the min value of i to MinValue

        //Find smallest element in unsorted part
        for(int j = i+1; j<n; j++){ // first is already sorted so now i+1
            if(arr[j]<arr[MinIndex]){
                MinIndex = j; //new min element is j
            }
        }
            // Swap smallest element with curretn position
            swap(arr[i], arr[MinIndex]);
    }
    cout<<"Sorted array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// Time & Space Complexity:

// Case	Number of Comparisons	Number of Swaps	Time Complexity
// Best Case (Already Sorted)	n(n-1)/2	At most n-1	O(n²)
// Average Case (Random Order)	n(n-1)/2	At most n-1	O(n²)
// Worst Case (Reverse Sorted)	n(n-1)/2	At most n-1	O(n²)