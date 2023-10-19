#include <iostream>
#include <string>

using namespace std;

int main() {
    int pilihan;
    int hargaTotal = 0; 

    cout << "Menu Masakan RM Sederhana\n";
    cout << "===========================\n";
    cout << "1. Soto Ayam - Rp 15.000\n";
    cout << "2. Soto Daging - Rp 15.000\n";
    cout << "3. Rawon - Rp 20.000\n";
    cout << "4. Gule - Rp 25.000\n";
    cout << "Mau Pesan apa ?\n";
    cin >> pilihan;
    string tambahan2;
    string tambahan3;

    switch (pilihan) {
        case 1:
            cout << "Anda memesan Soto Ayam\n";
            hargaTotal += 15000;
            cout << "Mau tambah Telur ? 1. Untuk ya dan 0. untuk tidak\n";
            int tambahan1;
            cin >> tambahan1;
            if (tambahan1 == 1) {
                hargaTotal += 5000;
                cout << "Anda memesan Soto Ayam dengan tambahan Telur\n";
            } else {
                cout << "Anda tidak menambah apa apa\n";
            }
            break;
        case 2:
            cout << "Anda memesan Soto Daging\n";
            hargaTotal += 15000;
            cout << "Mau tambah Telur ? 1. Untuk ya dan 0. untuk tidak\n";
            cin >> tambahan2;
            if (tambahan2 == "ya") {
                hargaTotal += 5000;
                cout << "Anda memesan Soto Daging dengan tambahan Telur\n";
            } else {
                cout << "Anda tidak menambah apa apa\n";
            }
            break;
        case 3:
            cout << "Anda memesan Rawon\n";
            hargaTotal += 20000;
            cout << "Mau tambah Empal ? Ketik Ya jika mau dan Tidak bila tidak mau\n";
            cin >> tambahan3; 
            if (tambahan3 == "ya") {
                hargaTotal += 20000;
                cout << "Anda memesan Rawon dengan tambahan Empal\n";
            } else {
                cout << "Anda tidak memesan apa apa\n";
            }
            break;
        case 4:
            cout << "Anda memesan Gule\n";
            hargaTotal += 25000;
            break;
        default:
            cout << "Pilihan tidak valid\n";
    }

    cout << "Total harga: Rp " << hargaTotal << endl;

    return 0;
}
