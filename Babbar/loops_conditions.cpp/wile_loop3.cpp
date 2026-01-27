// no. prine or not 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 2;
    while(i<n){
        if(n%i==0){
            cout<<"not prime number"<<endl;
        }
        i=i+1;
}
    
}