// When duplicates exist in a sorted array, normal 
// binary search:

// Stops at the first match it finds
// That match may NOT be the first or last occurrence

// arr = [2,3,4,5,5,5,7,11]

// initaily - we take first = -1 , last = -1

// this is the case for the linear search 

// In case of first occurance 
// first = 3 , last = 3
// here when we go to the next position then 
// first = 3 , last = 4
// again in the next step 
// first = 3 , last = 5

// time complexityn is  O(N) - we will reduce it to log(N)
// initially it is linear search but we will apply binary

// lower bound  = mid > n
// upper bound  = mid <n

// 2log(n) - when use both the upper and lower bound

// arr = [2,3,5, 5 ,5,5,7,11]
//       low    mid     high
// binary search  

// first occurance - the mid to the left 
// last occurance - the mid to right 


#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){
    int low = 0, high = n-1;
    int first = -1;

    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid]==key){
            first = mid;
            high = mid-1;
        }
        else if(arr[mid]<key){
            
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return first;
}

