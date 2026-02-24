// Check if element exists
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[],int n, int key){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
            high = mid-1;
        }
        if(arr[mid]<key){
            low = mid+1;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    
}