//Find the smallest element.

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
    int smallest = arr[n-1];
    for(int i=0;i<n;i++){
        if(smallest>arr[i]){
            smallest = arr[i];
        }
    }
    cout<<"smallest element:"<<smallest;

}
