#include <iostream>
using namespace std;

void switchCase()
{
    cout << endl;
    cout << "     Menghitung Luas Bangun " << endl;
    cout << "--------------------------------" << endl;
    cout << "| Pilih Rumus Luas Bangun :    |" << endl;
    cout << "| 1. Luas Lingkaran            |" << endl;
    cout << "| 2. Luas Segitiga             |" << endl;
    cout << "| 3. Luas Trapesium            |" << endl;
    cout << "--------------------------------" << endl;

    int pilih;
    cout << "Pilihan :";
    cin >> pilih;

    switch (pilih)
    {
    case 1:
    {
        // Menghitung Luas Lingkaran
        double jari_jari;
        cout << endl;
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> jari_jari;
        double luas_lingkaran = 3.14 * jari_jari * jari_jari;
        cout << "Luas lingkaran adalah: " << luas_lingkaran << endl;
        break;
    }

    case 2:
    {
        // Menghitung Luas Segitiga
        double alas, tinggi;
        cout << endl;
        cout << "Masukkan alas segitiga: ";
        cin >> alas;
        cout << "Masukan Tinggi segitiga: ";
        cin >> tinggi;
        double luas_Segitiga = 0.5 * alas * tinggi;
        cout << "Luas Segitiga tersebut adalah: " << luas_Segitiga << endl;
        break;
    }

    case 3:
    {
        double alas1, alas2, tinggi;
        cout << endl;
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

void studyIfCase()
{
}

int main()
{
    switchCase();
    return 0;
}
