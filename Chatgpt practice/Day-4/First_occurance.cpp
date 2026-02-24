// When duplicates exist in a sorted array, normal 
// binary search:

// Stops at the first match it finds
// That match may NOT be the first or last occurrence

// arr = [2,3,4,5,5,5,7,11]

// initaily - we take first = -1 , last = -1

// this is the case for the linear search 

// In case of first occurance 
// first = 3 , last = 3
// here when we go to the next position then 
// first = 3 , last = 4
// again in the next step 
// first = 3 , last = 5

// time complexityn is  O(N) - we will reduce it to log(N)
// initially it is linear search but we will apply binary

// lower bound  = mid > n
// upper bound  = mid <n

// 2log(n) - when use both the upper and lower bound

// arr = [2,3,5, 5 ,5,5,7,11]
//       low    mid     high
// binary search  

// first occurance - the mid to the left 
// last occurance - the mid to right 


#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>&arr, int n, int key){
    int low = 0, high = n-1;
    int ans = -1;  //initailly we take the first as -1 --> if the element is not found 

    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid]==key){
            ans = mid;
            high = mid-1;
        }
        else if(arr[mid]<key){
            
            low = mid + 1;
        }
        else{ // isme high = mid-1 kyuki mid>key and so high-1 karnese mid automaticly shift hojayega
            high = mid - 1;
        }
    }
    return ans;
}

int lastoccurance(vector <int>& arr, int n, int key){
    int low = 0 , high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low +(high-low)/2;
        
        if(arr[mid]==key){
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid]<key){
            low = mid +1;

        }
        else{
            high = mid -1;
        }
    }
    return ans;
}

int main(){
    int n,key;
    cout<<"Enter th number of elements: ";
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you want to find: ";
    cin>>key;

    int first = firstOccurence(arr,n,key);
    int last = lastoccurance(arr,n,key);

    if(first == -1)
        cout<<"Element not found\n";
    else{
        cout<<"First Occurence: "<<first<<endl;
        cout<<"Last Occurence: "<<last<<endl;
        cout<<"Total Count: "<<last - first + 1 <<endl;
    }
    

}