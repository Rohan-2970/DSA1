// ✅ 6. First Non-Repeating Character

// Problem:
// Find the first character that appears only once.

// Input:
// aabbcde

// Output:
// c

// 👉 Focus:
// Frequency + traversal

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    int freq[26] ={};

    for(char c : s){ // cout freq 
        freq[c - 'a']++;
    }

    // Step 2: Find first non-repeating
    for(char c : s){
        if(freq[c - 'a'] == 1){
            cout<< c<<endl;
            return 0;

        }
    }
    cout<<"No unique character";

}