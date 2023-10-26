#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Change this value to control the size of the diamond pattern
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        for (int l = i - 1; l > 0; l--) {
            cout << l;
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        for (int l = i - 1; l > 0; l--) {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}
