#include <iostream>
using namespace std;

void switchCase() {
    cout << "Pilih Rumus Luas Bangun : " << endl;
    cout << "1. Luas Lingkaran" << endl;
    cout << "2. Luas Persegi" << endl;
    cout << "3. Luas Trapesium " << endl;


    int pilih;
    cout << "Pilihan :" << endl;
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
            // Menghitung Luas Segitiga
            double sisi;
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            double luas_persegi = sisi * sisi;
            cout << "Luas persegi adalah: " << luas_persegi << endl;
            break;
        }

        case 3: {
            double alas1, alas2, tinggi;
            cout << "masukan alas ke 1 : " << endl;
            cin >> alas1;
            cout << "masukan Alas ke 2 : " << endl;
            cin >> alas2;
            cout << "masukan tingginya : " << endl;
            cin >> tinggi;
            double luas_Trapesium = 0.5 * (alas1 + alas2) * tinggi;
            cout << "Luas trapesium tersebut adalah : " << luas_Trapesium << endl;
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
