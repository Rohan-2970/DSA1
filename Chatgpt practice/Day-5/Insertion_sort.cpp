// it always take an element at atime and then 
// start with inserting it into the correct position
//  in the already sorted part of the array 

// Sorted part(left side)
//Unsorted part(right side)

// Assume first element is already sorted 
//Take the next element from the unsorted part
// compare it with elements in the sorted part

// example
// 9 15 14 6 12 8 13 

// 6 8 9 12 13 14 15
// for(i=0; i<=n-1; i++)
// j = i 
// while(j>0 && a[j-1]>a[j])
// swap(a[j-1], a[j])
// j--

#include<iostream>
#include<vector>
using namespace std;

void insertSort(int arr[], int n){
    for(int i = 1; i<=n-1; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;


        j--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the element : ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter each elemernt: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Sorted array: ";
    insertSort(arr.data(),n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }


}

// time complexity 
// worst casr    - o(n^2)
// average case  - O(n^2)
// best case     - O(n)
