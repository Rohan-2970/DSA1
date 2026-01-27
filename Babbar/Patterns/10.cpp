#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
   int i=1;
   
   while(i<=n){
    int j=1;
    while(j<=n){
        char fu;
        char value = 'A';
        fu =value +i+j-2;
        cout<<fu;
        
        j+=1;
    }
    cout<<endl;
    i+=1;
   }
}