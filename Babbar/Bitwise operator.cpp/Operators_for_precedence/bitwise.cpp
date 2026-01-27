#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
    cout<<"a&b"<<(a&b)<<endl;
    cout<<"a|b"<<(a|b)<<endl;
    cout<<"~a"<<(~a)<<endl;
    // ~x = -(x + 1)
    // ~4 = -5
    cout<<"a^b"<<(a^b)<<endl;

    // left shift karre hai ya roight shift toh padding with 0 always
    //  -ve case complire dependend -- padding si 
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl; 
    cout<<(19<<1)<<endl; //left shift 
// >>	Divide by 2ⁿ
// <<	Multiply by 2ⁿ
}