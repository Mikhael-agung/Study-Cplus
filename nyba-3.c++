#include <iostream>
using namespace std;

void switchCase() {
    cout << "Pilih Rumus Lingkaran atau Persegi: " << endl;
    cout << "1. Luas Lingkaran" << endl;
    cout << "2. Luas Persegi" << endl;

    int pilih;
    cin >> pilih;

    switch(pilih) {
        case 1: {
            // Menghitung Luas Lingkaran
            double jari_jari;
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> jari_jari;
            double luas_lingkaran = 3.14 * jari_jari * jari_jari;
            cout << "Luas lingkaran adalah: " << luas_lingkaran << endl;
            break;
        }

        case 2: {
            // Menghitung Luas Persegi
            double sisi;
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            double luas_persegi = sisi * sisi;
            cout << "Luas persegi adalah: " << luas_persegi << endl;
            break;
        }

        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }
}



void studyIfCase () {
    
}

int main() {
    switchCase();
    return 0;
}
