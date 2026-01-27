#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    

    for(int i=2; i<n; i++){
        if(n%2==0){
            cout<<"the number is not a prime number";
            break;
        }
        else{
            cout<<"the number is a prime number";
            break;
    }


}
}

