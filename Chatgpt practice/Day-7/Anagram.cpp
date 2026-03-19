// Two strings are anagrams if:

// ✅ Same characters
// ✅ Same frequency
// ✅ Order doesn’t matter

// Step-by-Step Example 1
// Input:
// a = "listen"
// b = "silent"

// Step 1: Count characters of a

// freq array initially:
// [0, 0, 0, ..., 0]

// After processing "listen":

// Char	Count
// l	+1
// i	+1
// s	+1
// t	+1
// e	+1
// n	+1

// Step 2: Subtract characters of b
// Process "silent":
// Char	Operation
// s	-1
// i	-1
// l	-1
// e	-1
// n	-1
// t	-1
// Result:

// All values become:
// [0, 0, 0, ..., 0]
// 👉 Means perfectly balanced → Anagram ✅

#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string a, string b){
    
    // Step 1: Length check
    if(a.length() != b.length())
        return false;
    
    // step 2: Freq array
    int freq[26] ={};

    // Step 3: Count characters of first string
    for(char c : a){
        freq[c - 'a']++;
    }

    // Step 4: Substract charecters of second string
    for(char c : b){
        freq[c - 'a']--;
    }

    // Step 4: Check if all values are 0
    for(int i=0; i<26; i++){
        if(freq[i] != 0)
        return false;
    }
    return true;

}
int main(){
    string a, b;
    cout << "Enter two strings: ";
    cin >> a >> b;

    if(isAnagram(a, b))
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}