// Search Insert Position

// we will be given 
// A sorted array 
// A target value

// If target exists → return its index
// If the target does not exist -> return index 
// where it should be inserted in the array so 
// the array remains sorted 

// arr = [1, 3, 5, 6]
// target = 2

// [1, 2, 3, 5, 6]
    // ↑
  // index = 1





#include<iostream>
#include<vector>
using namespace std;

int searchinsert(vector<int>& arr, int n , int key){
    int low = 0;
    int high = n-1;
    int ans =n; // if the lement is not 
    //  it will insert it at the last 
    while(low<=high){
        int mid = low +(high - low)/2;
        if(arr[mid]==key){
        ans = mid;
        high = mid - 1;

    }
    else{
        low = mid +1;
        }
}
    return ans;

}

int main(){
    int n,key;
    cout<<"Enter the elemnt : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"The elements values: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];

    }
    cout<<"Enter the key velue which you want to find: "<<endl;
    cin>>key;
    int search = searchinsert(arr,n,key);
    cout<<"inset positions: "<<search<<endl;
// print the new arry ś

}