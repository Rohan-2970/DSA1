// String Traversal 
// Traversal means visiting every character of the 
// string one by one.
// Used for loop
// String:
// hello

// Traversal order:
// h → e → l → l → o

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "Hello";
    cout<<"Traversal the string: "<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s[i]<<" ";
    }
}
// Time Complexity = O(n)