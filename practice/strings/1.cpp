#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    s = "hello";
    int l =0;
    int r = s.length()-1;
    for(int i=0; i<s.length();i++){ // visit every char of string
        while(l<r){
// When the number of iterations is not fixed, 
// depends on a condition.
            swap(s[l],s[r]);
            l++;
            r--;
        }
        
    }
    cout<<s;

}