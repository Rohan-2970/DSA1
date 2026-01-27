#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    // for(int a=0 , b=1, c=4; a>=0 && b>=1 && c>=4; a--,b--,c--){
    //     cout<<a<<" "<<b<<"\t"<<c<<endl;
    // }

    int sum = 0;
    for(int i=1; i<=n; i++){
        // sum = sum + i;
        sum += i;
    }

    cout<<sum<<endl;

}

