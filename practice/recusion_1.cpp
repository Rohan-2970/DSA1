// what is recusion

// if a function calling itself called recursion 

// there is a base codition to stop recurssion  or it will keep calling

// recursive function to print no from 1 to n

#include <iostream>
using namespace std;

void printNumbers(int current , int n){
    if(current > n){
        return;
    }
    cout<< current <<" ";
    printNumbers(current+ 1,n);
}

int main(){
int n;
cout << "Enter the number: ";
cin>>n;
printNumbers(1,n);
return 0;

}

