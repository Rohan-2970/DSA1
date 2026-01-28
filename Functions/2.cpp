#include<iostream>
using namespace std;

// Type 1: No Arguments, No Return --> Used for printing / display tasks.
// void greet(){
//     cout<<"Hello!";
// }

// Type 2: Arguments, No Return
void printtwonumbers(int a, int b){
    cout<<a+b;
}

int main(){
    // greet();
    int h,g; // listen here after declaring function 
//outside we also havr to declare it inside of the int main -- as it is another fuction
    cout<<"Enter the 1st number: ";
    cin>>h;
    cout<<"Enter the 2nd number: ";
    cin>>g;
    printtwonumbers(h,g);

}

