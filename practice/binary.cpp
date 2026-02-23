#include<iostream>
#include<vector>
using namespace std;

int binarySearchalgo(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;
    while (start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start = mid + 1;
        }
        if(arr[mid]>key){
            end = mid-1;
        }

    }
    return -1;
}

int main(){
    int n, key;
    cout<<"Enter the elements: ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element: ";
    cin>>key;
    int r = binarySearchalgo(arr.data(),n,key);
    if(r != -1){
        cout<<"Element faound at index: "<<r<<endl;
    }
    else{
        cout<<"Element not found: "<<endl;
    }
}