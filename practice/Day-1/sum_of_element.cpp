// Find the sum of elements.

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
    cout<<endl;
    int sum =0;
    for(int i = 0;i<n;i++){
        sum = i+ arr[i];
    }
        cout<<sum;

}
