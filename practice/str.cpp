#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ="Hello";
    cout<<"Traversal of string:"<<endl;
    for(int i = 0; i<s.length();i++){
        cout<<s[i]<<" ";
    }
}