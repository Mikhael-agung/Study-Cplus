#include <iostream>
using namespace std;


int main() {
    int n = 3; // Jumlah baris bintang di atas dan di bawah
    char currentChar = 'a';

    for (int i = 1; i <= n + 2; i++) {
        for (int j = 1; j <= n + 2; j++) {
            if (i == 1 || i == n + 2 || j == 1 || j == n + 2) {
                cout << "*";
            } else {
                cout << currentChar;
                currentChar++;
            }
        }
        cout << endl;
    }

    return 0;
}
