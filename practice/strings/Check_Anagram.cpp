// ✅ 5. Check Anagram
// Problem:
// Check if two strings are anagrams.

// Input:
// listen
// silent

// Output:
// Anagram

// 👉 Focus:
// Frequency array (freq[26])

#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string a, string b){
    if(a.length() != b.length()) // here the length of the strings are checked
        return false;

    int freq[26] ={};
// frequency of the array is given here 

    for(char c : a){
        freq[c - 'a']++;
    }
    // counting the char of the first string 

    for(char c : b){
        freq[c - 'a']--;
    }

    for(int i=0; i<26; i++){
        if(freq[i] != 0)
        return false;
    }
    return true;
}

int main(){
    string a, b;
    cout<<"Enter two string: ";
    cin>> a>>b;
    if(isAnagram(a,b))
        cout<<"Anagram";
    else
        cout<<"Not Anagram";
}
