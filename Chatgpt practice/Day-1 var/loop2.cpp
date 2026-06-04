#include<iostream>
using namespace std;
int main(){
    int x,m;
    cout<<"Enter 2 numbers to find the greater or less than: ";
    cin>>m;
    cin>>x;
    if(m>x){
        cout<<m<<" is greater than "<<x;
    }
    else{
        cout<<x<<" is greater than "<<m;
    }
}