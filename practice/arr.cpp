#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    int arr[a];
    cout<<"Enter the elements to be kept in the array: "<<endl;
    for(int i = 0; i<a;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"the elements of the array: "<<arr[a];
}