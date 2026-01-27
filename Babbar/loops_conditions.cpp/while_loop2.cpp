#include<iostream>
using namespace std;
int main(){
    // to pin sum of firs 20 numbers 
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=1;
    int sum = 0;
    while(i<n)
    {
        sum = sum+i;
        i=i+1;
    }
    cout<<"Value of sum is: "<<sum<<endl;
}