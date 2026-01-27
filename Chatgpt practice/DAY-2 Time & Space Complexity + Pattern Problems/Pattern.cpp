// to print in the single line

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i = 0; i<=n; i++){
//         cout<<i<<endl;

//     }
// }

// Pattern -2
// Reverse star patterns


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i= 1 ; i<=n; i++){
//         for(int j = i; j<=n; j++){
//             cout<<"*";
//         }
//             cout<<endl;

//     }
// }

// Pattern - 3
// matrix pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i = 0; i<=n; i++){
//         for(int j = 0; j<=n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Pattern - 3
// right triangle
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = n; j<=2*n - 1 ; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}