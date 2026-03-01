// Time complexity

//   case      Normal version      Optimized 
// Worst Case   	O(n²)	           O(n²)
// Average	        O(n²)	           O(n²)
// Best Case	    O(n²)	            O(n)




#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements the array should have: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the value of each element: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // bubble sort 

    // understanding --

// we used bool swapped to check whether any 
// swapping happened in current phase if the
//  array is already sorted, in normal 
// "for loop" of bubble sort it checks the 
// element again and again even if the array 
// is already sorted ex-- 1 2 3 4 5 it will 
// check again and again if it is sorted or not 


    bool swapped;
    for(int i = 0; i<n-1; i++){
        swapped = false;
        
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
// if no swap happens the entire timw thwn 
// this if runs and loop stops 
        if(!swapped){
            break;
        }
    }
    cout<<"Sorted array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}