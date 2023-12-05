#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string kalimat;
    char pengganti;
    int jumlahVokal = 0;

    cout << "Masukkan sebuah kalimat : ";
    getline(cin, kalimat);
    cout << "Masukkan pengganti huruf vokal : ";
    cin >> pengganti;

    for (int i = 0; i < kalimat.length(); i++) {
        char huruf = toupper(kalimat[i]);
        if (huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O') {
            kalimat[i] = pengganti;
            jumlahVokal++;
        }
    }

    cout << "Kalimat setelah mengganti huruf vokal : " << kalimat << endl;
    cout << "Jumlah huruf vokal di kalimat : " << jumlahVokal << endl;

    return 0;
}
