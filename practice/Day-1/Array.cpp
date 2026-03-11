// Find the largest element in an array.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the elements: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elments: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    int largest = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<endl;
    cout<<"Largest elements: "<<largest;
}
