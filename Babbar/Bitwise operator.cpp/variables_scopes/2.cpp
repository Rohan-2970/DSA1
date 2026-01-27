// 11 digit ka binary hai to uske undar
// kitte 1 hai ginne hai kase ?
// conv. to decimal and then counting
// or bitwise operator <<  use kar ke bhi kar sakte hai


// #include<iostream>
// #include <cstdint>
// using namespace std;
// class Solution{
//     public: 
//         int hammingWeight(uint32_t n){
//             int count = 0;
//             while(n!=0){
//                 if(n&1){
//                     count++;
//                 }
//                 n=n>>1;

//         }
//         return count;
//     }
// };
// int main(){
//     Solution s;
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<s.hammingWeight(n);
// }

// reverse of this question 
// if in form of 101 or in bitwise the number 
// is given so iy can be converted back to the no.

// formula = 

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number "<<endl;
//     cin>>n;
//     int ans=0;
//     int i=0;
//     while(n != 0){
//         int bit = n&1;
//         ans = (bit *pow(10,i))+ans;
//         n=n>>1;
//         i++;
//     }
//     cout<<"Answer is "<<ans<<endl;
// }

// same flow
// ((ans * 10) + digit)
// reverse flow 
// ((1*10^no. of place)+ans)

// negatiev numbers
// ignore -ve 2s complement nikalo -->  then take 1 comlement +1
// 1-0 ands 0-1 in 2s complement

// -ve number - binary

// binary - desimal 
// 10101
// 2^4 + 2^3 +2^2 +-- --- 21

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans =0;
    int i= 0;
    while(n!=0){
        int digit = n % 10;
        if(digit==1){
            ans=ans+pow(2,i);
        } 
        n=n/10;
        i++;
    }
    cout<<ans<<endl;

}