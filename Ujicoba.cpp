#include <iostream>
#include <string>

int main() {
    int pilihan;
    int hargaTotal = 0;

    std::cout << "Menu Masakan RM Sederhana\n";
    std::cout << "===========================\n";
    std::cout << "1. Soto Ayam - Rp 15.000\n";
    std::cout << "2. Soto Daging - Rp 15.000\n";
    std::cout << "3. Rawon - Rp 20.000\n";
    std::cout << "4. Gule - Rp 25.000\n";
    std::cout << "Mau Pesan apa ?\n";
    std::cin >> pilihan;

    int tambahan = 0;
    std::string tambahan2;

    switch (pilihan) {
        case 1:
            std::cout << "Anda memesan Soto Ayam\n";
            hargaTotal += 15000;
            std::cout << "Mau tambah Telur ? 1 untuk ya dan 0 untuk tidak\n";
            std::cin >> tambahan;
            if (tambahan == 1) {
                hargaTotal += 5000;
                std::cout << "Anda memesan Soto Ayam dengan tambahan Telur\n";
            }
            else {
                std::cout << "Anda tidak menambah apa-apa\n";
            }
            break;
        case 2:
            std::cout << "Anda memesan Soto Daging\n";
            hargaTotal += 15000;
            std::cout << "Mau tambah Telur ? 1 untuk ya dan 0 untuk tidak\n";
            std::cin >> tambahan;
            if (tambahan == 1) {
                hargaTotal += 5000;
                std::cout << "Anda memesan Soto Daging dengan tambahan Telur\n";
            }
            else {
                std::cout << "Anda tidak menambah apa-apa\n";
            }
            break;
        case 3:
            std::cout << "Anda memesan Rawon\n";
            hargaTotal += 20000;
            std::cout << "Mau tambah Empal ? 'ya' untuk ya dan 'tidak' untuk tidak\n";
            std::cin >> tambahan2;
            if (tambahan2 == "ya") {
                hargaTotal += 20000;
                std::cout << "Anda memesan Rawon dengan tambahan Empal\n";
            }
            else {
                std::cout << "Anda tidak menambah apa-apa\n";
            }
            break;
        case 4:
            std::cout << "Anda memesan Gule\n";
            hargaTotal += 25000;
            break;
        default:
            std::cout << "Pilihan tidak valid\n";
            return 1; // Menghentikan program jika pilihan tidak valid.
    }

    std::cout << "Total harga: Rp " << hargaTotal << std::endl;

    return 0;
}
