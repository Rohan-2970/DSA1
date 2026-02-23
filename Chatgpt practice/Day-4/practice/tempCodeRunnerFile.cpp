// Implement binary search

#include<iostream>
#include<vector>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int low =0;
    int high = n-1;

    int mid = (high-low)/2;
    while(low<=high){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            low = mid+1;
        }
        if(arr[mid]>key){
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    int n, key;
    cout<<"Enter the element: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the value of each element: ";
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search: ";
    cin>>key;

    int result = binarysearch(arr.data(),n, key);
    if(result !=-1)
        cout<<"if elemt is at inedx"<<key<<endl;
    else
        cout<<"elemrnt not found ";

}