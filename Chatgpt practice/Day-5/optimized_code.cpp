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
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){ // yaha pe j > j+1 
// aye toh humlog ko swap karna hai no.s ---- matlab 
// 1 2 3 5 4 -- j= 5 and j+1 = 4 toh bada no. ko last 
// me ane ke liye swap karna hai
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    cout<<"Sorted array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}