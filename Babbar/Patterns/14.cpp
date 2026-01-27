  #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the grid: ";
    cin >> n;

    int i = 1;
    while(i <= n) {
        // space print skrlo
        int space = n-i;
        while(space){
            cout<<" ";
            space = space -1;
        }
        // star print karlo
        int col =1;
        while (col<=i){
        cout<<"*";
        col= col+1;
        }
        
        cout << endl;
        i++;
    }
}
 