#include<iostream>
#include<vector>
using namespace std;

int binarysearchalgo(int arr[],int n, int key){
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;
    if(arr[mid] == key){
        return mid;
    }
    if(arr[mid]<key){
        return mid+1;
    }
    else if(arr[mid]>key){
        return mid-1;
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter a number: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the "<<n<<" element values: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key: ";
    cin>>key;

    int result = binarysearchalgo(arr.data(),n,key);
    if(result != -1){
        cout<<"Element foud at the index "<<result<<endl;
    }
    else{
        cout<<"Element is not found at the arrays ";
    }

}