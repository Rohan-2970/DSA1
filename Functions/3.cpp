#include<iostream>
using namespace std;

// Type 3: No Arguments, Return Value
// int getnumber(){
//     return 10;
// }

// Type 4: Arguments + Return (MOST IMPORTANT)
int square(int n){
    return n*n;
}

int main(){
    // cout<<getnumber();
    int a;
    cout<<"Enter the value sof a: ";
    cin>>a;
    cout<<square(a);

}

// 5️⃣ Function Call Stack (INTERVIEW FAVORITE)
// Example:
// main() → fun1() → fun2()


// 📌 Functions execute in Last In First Out (LIFO) order
// 📌 Stack memory is used

// 6️⃣ Parameter Passing