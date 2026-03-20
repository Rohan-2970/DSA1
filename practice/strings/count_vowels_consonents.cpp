// ✅ 4. Count Vowels and Consonants
// Problem:
// Count number of vowels and consonants.

// Input:
// hello

// Output:
// Vowels: 2
// Consonants: 3

// 👉 Focus:
// Traversal
// Character classification

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,v,c;
    cout<<"Enter the string: "<<endl;
    cin>>s;

    for(int i = 0; i < s.length() ;i++){
        cout<<s[i]<<" ";
    }
    int vowels = 0, consonents = 0;
    for(char c : s){
        c = tolower(c);

        if(isalpha(c)){ 
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowels++;
            else 
                consonents++;
        }
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"consonents: "<<consonents<<endl;
}