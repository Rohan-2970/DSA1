// Find Maximum & Minimum
// helps in finding the max and mon value 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the "<<n<<"values: ";
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for(int i = 1;i<n; i++){
        if(arr[i]<min)
            min = arr[i];// to print the min value 
        if(arr[i]>max)
            max = arr[i];// to print the max value
    }
        
    cout<<"Maximum = "<<max;
    cout<<"Minimum = "<<min;
    
    
}