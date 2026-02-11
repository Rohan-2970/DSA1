// BINARY SEARCH

// Binary Search is a searching algorithm that finds 
// an element in a sorted array by repeatedly dividing
// the search space into two halves.

// if not sorted → Binary Search will fail

// Array:  [10, 20, 30, 40, 50]     
// Target: 40
// Steps:
// 40 greater than 30 so grater than  30 side search now 
// now there mid element mid = (3+4)/2 = 7/2 = 3
// 40 == 40 --> true

// Find the middle

// Compare middle with target
// If equal → done
// If target is smaller → go left
// If target is larger → go right then take the mid 
// elemet divide it by 2 and then compare it 

// elements shloud be in monotonic fuction 
// Repeat until found or range becomes invalid


#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    int mid = (start + end)/2;

    while(start<=end){
       if(arr[mid] == key){
        return mid;
       }   
       if(arr[mid]<key){// here we are bascally achecking the number whose value is greater than the mid value
        start = mid+1;
       }
       else{
        end = mid-1; // see the above commenthere we are looking for the value less than the mid value
       }
// Array: [2, 4, 6, 8, 10]
// Key = 3
// mid = 6
// 6 > 3
// Move left → end = mid - 1

       mid = (start + end)/2; // Recalculate mid
    }
    return -1; //element not found 
}

int main(){
    // int even[5]= {3,4,5,6,8};
    // int odd[6] = {2,4,5,6,18};
    // int evenindex = binarySearch(even, 6, 18);
    // cout<<"Index of 18 is "<<evenindex <<endl;

    int n,key;
    cout<<"Enter the number of elements: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the values of "<<n<<": ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
cout<<"Enter the element to search: ";
cin>>key;

int result = binarySearch(arr.data(), n ,key);
if(result != -1){
    cout<<"Element found at index: "<<result<<endl;
}
else{
    cout<<"Elements not found"<<endl;
}
}
// Time: O(log n)
// Space: O(1)