#include<iostream>
using namespace std;
int main(){
       int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1;
    int count=1;//keeps track of n ext number to print
    while (i<=n)
    {
       int j=1;
        while(j<=n){
           cout<<count<<" ";
        count = count + 1;
        j=j+1;
       }
 
   
        cout<<endl;
    i=i+1;
    
}

}