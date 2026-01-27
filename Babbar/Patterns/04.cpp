#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
// cout of * depend kar raha hai no. of 
// rows pe matlab j=i while loop ke andar

// ginti kitne baar print hori hai toh vo 
// row ke no. baar print hori ahi 