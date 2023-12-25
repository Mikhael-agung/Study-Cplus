#include <iostream>
#include <string>

using namespace std;

int main()
{
    int pilihan;
    int pilihanUser;
    int totalHarga = 0;

    while (true)
    {
        cout << endl;
        cout << "===========================" << endl;
        cout << "| Daftar Makanan:         |" << endl;
        cout << "| 1. Sate                 |" << endl;
        cout << "| 2. Soto                 |" << endl;
        cout << "| 3. Gulai                |" << endl;
        cout << "| 0. Cukup                |" << endl;
        cout << "|=========================|" << endl;
        cout << "Pilih jenis makanan : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << endl;
            cout << "|==========================|" << endl;
            cout << "|  Pilih porsi Sate:       |" << endl;
            cout << "|  1. Sate 10 tusuk - 10K  |" << endl;
            cout << "|  2. Sate 20 tusuk - 20K  |" << endl;
            cout << "============================" << endl;
            cout << "  Silakan Pilih porsi : ";
            cin >> pilihanUser;

            switch (pilihanUser)
            {
            case 1:
                totalHarga += 10;
                break;
            case 2:
                totalHarga += 20;
                break;
            default:
                cout << "Pilihan porsi tidak valid." << endl;
                break;
            }
            break;

        case 2:
            cout << endl;
            cout << "|==========================|" << endl;
            cout << "| Pilih porsi Soto         |" << endl;
            cout << "|  1. Soto daging - 15K    |" << endl;
            cout << "|  2. Soto ayam - 20K      |" << endl;
            cout << "|==========================|" << endl;
            cout << "  Silakan Pilih porsi : ";
            cin >> pilihanUser;

            switch (pilihanUser)
            {
            case 1:
                totalHarga += 15;
                break;
            case 2:
                totalHarga += 20;
                break;
            default:
                cout << "Pilihan porsi tidak valid." << endl;
                break;
            }
            break;

        case 3:
            cout << endl;
            cout << "|============================|" << endl;
            cout << "|  Pilih porsi Gulai:        |" << endl;
            cout << "|  1. Gulai sapi - 20K       |" << endl;
            cout << "|  2. Gulai ayam - 15K       |" << endl;
            cout << "|============================|" << endl;
            cout << "  Silakan Pilih porsi : ";
            cin >> pilihanUser;

            switch (pilihanUser)
            {
            case 1:
                totalHarga += 20;
                break;
            case 2:
                totalHarga += 15;
                break;
            default:
                cout << "Pilihan porsi tidak valid." << endl;
                break;
            }
            break;

        case 0:
            cout << "Total harga pesanan Anda adalah: " << totalHarga << "K" << endl;
            return 0;

        default:
            cout << "Pilihan makanan tidak valid." << endl;
        }
    }

    return 0;
}
