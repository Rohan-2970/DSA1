// An array is a collection of elements of the same 
// data type stored in contiguous memory locations.

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {34,46,78,98,24};
    cout<<arr[4]<<endl;

    //to print all of them 
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}