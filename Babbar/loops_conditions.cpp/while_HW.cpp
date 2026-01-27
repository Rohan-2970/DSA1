// find sum of all even no.s
#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the number: ";
cin>>n;
int i=2;
int sum = 0;
while ( i<=n){
sum = sum+i;
    
i=i+2;
}
cout<<"sum of even numbers is: "<<sum<<endl;
}