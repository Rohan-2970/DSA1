#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    // cout<<"printing count from 1 to n"<<endl;
    // for(int i= 1; i<=n; i++){̥
    // //  initaialisation , condition , updation
    //     cout<<i<<endl;
    // }
    int i= 1;
    for(; ; ){
        if(i<=n){
            cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }
}

