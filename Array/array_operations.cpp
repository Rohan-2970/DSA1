#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the element: ";
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"Enter the "<<n<<" elements in the array: ";
    for(int i=0; i<n;i++){
        //cout<<arr[i]<<" ";  // write this if you want the 
        // array to take some random garbage values
        cin>>arr[i];
        // write this if you want to fill the array by yourself
    }
    cout<<endl;

    //Max element 
    int maxVal = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]> maxVal)
            maxVal = arr[i];
    }
    cout<<"Enter the maxVal: "<<maxVal<<endl;

    cout<<endl;
    //Min elements
    int MinValue = arr[n];
    for(int i = 1; i<n;i++){
        if(arr[i]<MinValue){
            MinValue = arr[i];
        }
    }
    cout<<"Enter the MinValue: "<<MinValue;


    //Sum of elements
    
}