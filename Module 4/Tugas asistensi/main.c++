// File main.cpp
#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int pilih;
    char konfirmasi = 'Y';

    cout << "Tugas Asistensi " << endl;
    cout << pilih << endl;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    do
    {
        cout << "Menu Utama" << endl;
        cout << "1. Tampilkan Kalimat\n";
        cout << "2. Buat Kalimat baru\n";
        cout << "3. Ubah kalimat (Call by Value)\n";
        cout << "4. Ubah kalimat (Call by Reference)\n";
        cout << "5. Hapus Kalimat\n";
        cout << "6. Urutkan kalimat ascending\n";
        cout << "7. Urutkan kalimat Descending\n";
        cout << "8. Tampilkan huruf vokal\n";
        cout << "9. Out\n";
        cout << "Masukkan pilihan: ";
        cin >> pilih;
        cin.ignore();
        switch (pilih)
        {
        case 1:
            cout << "Kalimat yang Anda masukkan: " << kalimat << endl;
            cout << "Kembali ke menu utama: ";
            cin >> konfirmasi;
            if (konfirmasi == 'Y' || konfirmasi == 'y')
            {
                pilih = 0;
            }
            else
            {
                pilih = 9;
            }
            break;

        case 2:
            createSentence();
            cout << "Kalimat baru yang Anda buat: " << kalimat << endl;
            cout << "Kembali ke menu Utama: ";
            cin >> konfirmasi;
            if (konfirmasi == 'Y' || konfirmasi == 'y')
            {
                pilih = 0;
            }
            else
            {
                pilih = 9;
            }
            break;

        
        default:
            pilih = 9;
            break;
        }
    } while (pilih != 9);
    cout << "Terima kasih sudah berkunjung!";
    return 0;
}
