#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>

using namespace std;

void hasilBelajarSatu() {
 // ? Menginisialisasi generator angka acak dengan waktu saat ini
    // std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // * Menghasilkan angka acak antara 1 hingga 3 (mewakili waktu memasak antara 1 hingga 3 menit)
    double cookTime = (std::rand() % 300) / 100.0; // Menghasilkan waktu dalam desimal hingga dua tempat desimal

    // * Menampilkan waktu memasak yang dihasilkan
    std::cout << "Waktu memasak: " << cookTime << " menit" << std::endl;

    //! Memeriksa apakah waktu memasak kurang dari 1,5 menit
    if (cookTime < 1.5) {
        std::cout << "Mie belum matang." << std::endl;
    } else if (cookTime == 1.5) {
        std::cout << "Mie sudah matang." << std::endl;
    } else {
        std::cout << "Mie terlalu matang." << std::endl;
    }
    
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

void hasilBelajarDua() {
    
   

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

int main() {
     // * matematika sederhana 1
    float X, Y;

    cout << "Masukan angka yang akan di jumlahkan dengan Y: ";
    cin >> X;
    cout << "Masukan angka yang akan di Jumlahkan dengan X: ";
    cin >> Y;
    int Z = X + Y;

    cout << "Hasil dari penjumlahan Z di atas = " << Z << endl;
   
    thread t1(hasilBelajarSatu);
    thread t2(hasilBelajarDua);

    t1.join();
    t2.join();

   return 0;
}
