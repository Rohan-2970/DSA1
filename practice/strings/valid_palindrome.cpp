// ✅ 3. Valid Palindrome (Ignore Special 
// Characters)

// Problem:
// Check if string is palindrome ignoring:
// spaces
// punctuation

// case

// Input:
// A man, a plan, a canal: Panama

// Output:
// Palindrome

// 👉 Focus:
// tolower()
// skipping non-alphanumeric


#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool palindrome(string s){
    int l = 0;
    int r = s.length()-1;
    while(l<r){
        
        // skip non-alphanumeric from left 
        while(l<r && !isalnum(s[l])){
            l++;
        }
        // skip non-alphanumeric from right 
        while(l<r && !isalnum(s[r]) ){
            r++;
        }
        // compare (case-insensitive)
        if(tolower(s[l]) != tolower(s[r]))
            return false;

        l++;
        r++;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter the s string: ";
    cin>>s;
    if(palindrome(s))
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}