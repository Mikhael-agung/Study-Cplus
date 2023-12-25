#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
// * saol no 5
int main(){
    string angka;
    int hasil;

    cout << "Masukkan angka (dalam bentuk string): ";
    cin >> angka;

    // Mengubah string menjadi integer dengan menggunakan fungsi atoi()
    hasil = atoi(angka.c_str());

    // Menggunakan if else untuk mengecek apakah konversi berhasil atau tidak
    if (hasil != 0 || angka == "0") {
        // Jika hasil tidak sama dengan 0 atau angka sama dengan "0", maka konversi berhasil
        cout << "Angka setelah konversi : " << hasil << endl;
    }
    else {
        // Jika hasil sama dengan 0 dan angka tidak sama dengan "0", maka konversi gagal
        cout << "Konversi gagal. Masukkan sebuah angka yang valid!" << endl;
    }
    return 0;
}
