#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" number of elements: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //forward traversal
    cout<<"\nForward Traversal: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"\nReverse Traversal: ";
    for(int i=n; i>n-1; i--){
        cout<<arr[i]<<" ";
    }
}