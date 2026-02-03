// SEARCHING IN ARRAYS

// Linear Search (Unsorted Array)
#include<iostream>
using namespace std;
int main(){
    int n , key;

    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" number of elements: \n";
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter element to search: ";
    cin>>key;
    bool found = false;
    for(int i = 0; i<n;i++){
        if(arr[i] == key){
            cout<<"Element found at index: "<<i<<endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout<<"Element not found"<<endl;
    }
}