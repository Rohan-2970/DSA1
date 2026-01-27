#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
        cout<<j; // matlab column ke hisab se chnge hoga values try with i=1 also 
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
}