// Array Reversal (INTERVIEW FAVORITE)
// Reverse the elements of an array in-place 
// (without using extra array).

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the elements: ";
    cin>>n;

    vector<int> arr(n);    
    cout<<"Enter the array elements: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    // Array reversal logic 
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
}