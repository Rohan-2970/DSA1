#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=i; //here when i=2 then j=2 and prints 1 value less than prev.
        while(j<=n){//to print 5 rows and 5 colmns put j=1
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}