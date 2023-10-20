#include <iostream>
using namespace std;

void module1_07651()
{
    int pilih_07651;
    string end_07651;

    do
    {

        cout << endl;
        cout << "     Menghitung Luas Bangun " << endl;
        cout << "--------------------------------" << endl;
        cout << "| Pilih Rumus Luas Bangun :    |" << endl;
        cout << "| 1. Luas Lingkaran            |" << endl;
        cout << "| 2. Luas Segitiga             |" << endl;
        cout << "| 3. Luas Trapesium            |" << endl;
        cout << "--------------------------------" << endl;

        cout << "Pilihan :";
        cin >> pilih_07651;

        switch (pilih_07651)
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
            cout << "Luas Segitiga adalah: " << luas_Segitiga << endl;
            break;
        }

        case 3:
        {
            double alas1, alas2, tinggi; // Untuk Rumus Trapesium
            cout << endl;
            cout << "masukan alas ke 1 : ";
            cin >> alas1;
            cout << "masukan Alas ke 2 : ";
            cin >> alas2;
            cout << "masukan tingginya : ";
            cin >> tinggi;
            double luas_Trapesium = 0.5 * (alas1 + alas2) * tinggi;
            cout << "Luas trapesium tersebut adalah : " << luas_Trapesium << endl;
            break;
        }

        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
        }

        cout << "Apakah Anda ingin menghitung lagi? (ketik YA bila setuju / NO bila tidak): ";
        cin >> end_07651;
    } while (end_07651 == "YA" || end_07651 == "ya"); // perubahan terjadi di sini, do-while sekarang melingkupi sebagian besar program
    cout << "Terima kasih" << endl;
}

int main()
{
    module1_07651();
    return 0;
}
