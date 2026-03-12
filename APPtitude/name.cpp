#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    cin>> name;
    bool capitalize = true;
    for(int i = 0; i<name.length(); i++ ){
        if(capitalize && isalpha(name[i])){
            capitalize = false;

        }
        else if (name[i] = ' '){
            capitalize = true;
        }
    }
    cout << name;
}