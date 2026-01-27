// **** stars in 4 rows 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of patterns: ";
    cin>>n;
    int i = 1;
    while(i<=n){ //this is for row
        int j=1;
        while(j<=n){ // this is for the column 
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}