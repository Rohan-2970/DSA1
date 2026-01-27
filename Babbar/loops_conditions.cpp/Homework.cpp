#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if (ch >='a' && ch<= 'z')
        cout<<"Ch is a lowercase character";
    else if ('A'<=ch && ch<='Z')
        cout<<"Ch is a uppercase character";
    else if ('0'<=ch<='9')
    {
        cout<<"Ch is a betn 0 and 9";
    }
    else
        cout<<"Invalid statement";
    

}