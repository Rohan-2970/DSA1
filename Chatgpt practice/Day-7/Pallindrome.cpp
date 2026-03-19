// A string that reads the same forward and backward.

// Examples"

// ✅ madam
// ✅ level
// ❌ hello

// Logic

// Compare:
// first ↔ last
// move inward

// Dry Run Visualization ---> Manually executing 
// your code step-by-step using a sample input
// General Pattern:
// Start → Compare → Move inward → Repeat
// [l] ----> <---- [r]

#include<iostream>
#include<string>
using namespace std;

bool isPallindrome(string s){
// is this string a boolean means it is true or not
        int l =0;
        int r = s.length() - 1;
        while(l<r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
int main(){
string s;
cout<<"Enter the string number: ";
cin>>s;

if(isPallindrome(s))
    cout<<"palindrome ";
else
    cout<<"Not Pallindrome ";

}
