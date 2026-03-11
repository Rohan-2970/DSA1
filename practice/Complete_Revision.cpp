#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    vector<int>left(n1);
    vector<int>right(n2);
    for(int i= 0; i<n1; i++){
        left[i] = arr[l+i];
    }
    for(int j= 0; j<n2; j++){
        right[j] = arr[mid+1+j];
    }
    int i=0,j=0;
    while(i<n1 && j<n2)
        if(left[i] <= right[j]){
            arr[l++] = left[i++];
        }
        else
            arr[l++] = right[j++];
    while(i<n1){
        arr[l++] = left[i++];
    }
    while(i<n2){
        arr[l++] = right[j++];
    }
}
void mergesort(int arr[], int l, int r){
    if(l<r){
        int mid = l+(r-l)/2;
        mergesort(arr,mid,l);
        mergesort(arr,mid+1,r);
        merge(arr, l, mid, r);
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter value of each element: ";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
}
    mergesort(arr.data(), 0, n-1);
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

}

}