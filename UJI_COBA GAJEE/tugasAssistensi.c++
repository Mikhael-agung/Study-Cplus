#include <iostream>
using namespace std;

// void module1_07651()
// {
//     int pilih_07651;
//     string end_07651;
//     float jari_07651, alas_07651,
//     tinggi_07651, luas_lingkaran,
//     luas_Segitiga, luas_Trapesium;

//     do
//     {

//         cout << endl;
//         cout << "     Menghitung Luas Bangun " << endl;
//         cout << "--------------------------------" << endl;
//         cout << "| Pilih Rumus Luas Bangun :    |" << endl;
//         cout << "| 1. Luas Lingkaran            |" << endl;
//         cout << "| 2. Luas Segitiga             |" << endl;
//         cout << "| 3. Luas Trapesium            |" << endl;
//         cout << "--------------------------------" << endl;

//         cout << "Pilihan : ";
//         cin >> pilih_07651;

//         switch (pilih_07651)
//         {
//         case 1:
//         {
//             // Menghitung Luas Lingkaran

//             cout << endl;
//             cout << "Masukkan jari-jari lingkaran: ";
//             cin >> jari_07651;
//             luas_lingkaran = 3.14 * jari_07651 * jari_07651;
//             cout << "Luas lingkaran adalah: " << luas_lingkaran << endl;
//             break;
//         }

//         case 2:
//         {
//             // Menghitung Luas Segitiga
//             cout << endl;
//             cout << "Masukkan alas_07651 segitiga: ";
//             cin >> alas_07651;
//             cout << "Masukan tinggi_07651 segitiga: ";
//             cin >> tinggi_07651;
//             luas_Segitiga = 0.5 * alas_07651 * tinggi_07651;
//             cout << "Luas Segitiga adalah: " << luas_Segitiga << endl;
//             break;
//         }

//         case 3:
//         {
//             // Untuk Rumus Trapesium
//             cout << endl;
//             cout << "masukan alas_07651 ke 1 : ";
//             cin >> alas_07651;
//             cout << "masukan alas_07651 ke 2 : ";
//             cin >> alas_07651;
//             cout << "masukan tinggi_07651nya : ";
//             cin >> tinggi_07651;
//             luas_Trapesium = 0.5 * (alas_07651 + alas_07651) * tinggi_07651;
//             cout << "Luas trapesium tersebut adalah : " << luas_Trapesium << endl;
//             break;
//         }

//         default:
//             cout << "Pilihan tidak valid!" << endl;
//             break;
//         }

//         cout << "Apakah Anda ingin menghitung lagi? (ketik YA bila setuju / NO bila tidak): ";
//         cin >> end_07651;
//     } while (end_07651 == "YA" || end_07651 == "ya"); // perubahan terjadi di sini, do-while sekarang melingkupi sebagian besar program
//     cout << "Terima kasih" << endl;
// }

// void tugasPendahuluan()
// {
//     int angka;
//     cout << "Masukkan sebuah bilangan: ";
//     cin >> angka;

//     if (angka % 2 == 0)
//     {
//         cout << angka << " adalah bilangan positif.";
//     }
//     else
//     {
//        cout << " adalah bilangan negatif.";
//     }
// }

void tugasBaru () {
    int n = 5;  // Change this value to control the size of the pattern
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = n; j > i; j++) {
            cout << "  ";
        }
        
        // Print numbers in increasing order
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        
        cout << endl;
    }
    
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = n; j > i; j++) {
            cout << "  ";
        }
        
        // Print numbers in decreasing order
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        
        cout << endl;
    }
    

}

int main()
{
    // tugasPendahuluan();
    tugasBaru();
    // module1_07651();
    return 0;
}
