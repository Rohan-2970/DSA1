#include<iostream>
#include<string>
using namespace std;

bool palindrome(string s){

    int l = 0;
    int r = s.length()-1;
        while(l<r){
            if(s[l]!=s[r])
                return false;

            l++;
            r--;
            }
            return true;
        }

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    if(palindrome(s))
        cout<<"palindrome";
    else
        cout<<"Not palindrome";
}