// 6️⃣ Parameter Passing
// 🔹 1. Call by Value
// A copy of the actual variable 
// is passed to the function.

#include<iostream>
using namespace std;

void callbyvalue(int a){
    a =43;
}
int main(){
    int c =4;
    callbyvalue(c);
    cout<<c;
} 

