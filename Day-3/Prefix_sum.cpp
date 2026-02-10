// Prefix Sum is a preprocessing technique used to 
// quickly calculate the sum of elements in a range 
// of an array.

// sum of all the elements till thta element 

// Index:   0  1  2  3
// Array:   2  4  6  8

// Prefix Sum Array
// Prefix:  2  6 12 20

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter yhe elements: ";
    cin>>n;

    vector<int> arr(n);
    vector<int> prefix(n);

    cout<<"Enter the "<<n<<"element values: ";
    for(int i= 0; i<n; i++){
    cin>>arr[i];
    }
    prefix[0] = arr[0];
    for(int i = 1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];

    }
    cout<<"Enter the Prefix: "<<endl;
    for(int i =0; i<n;i++){
        cout<<prefix[i]<<" ";
    }
    cout<<endl;

// Step 2: Range Sum Query
    int L,R;
    cout<<"Enter L and R : ";
    cin>>L>>R;
    
    int rangeSum;
    if(L == 0)
        rangeSum = prefix[R];
    else
        rangeSum = prefix[R] - prefix[L - 1];

    cout<<"Sum from index "<<L<<" to "<< R <<" = "<<rangeSum;
    

}