#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the grid: ";
    cin >> n;

    char ch = 'A';
    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= n) {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
