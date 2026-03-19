// Use two pointers:

// l → start
// r → end

// Swap and move inward

// hello
// l   r

// swap → oellh
//  move pointers inward

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    int l = 0;
    int r = s.length() - 1;
    while(l < r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
    cout<<s;
}
