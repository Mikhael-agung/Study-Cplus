#include <iostream>
using namespace std;

int main()
{
    // Deklarasikan variabel array yang berisi angka-angka yang ingin Anda bandingkan
    int data[10] = {12, 45, 67, 23, 89, 34, 76, 54, 90, 11};

    // Deklarasikan variabel lain yang akan digunakan untuk menyimpan nilai terbesar dan indeksnya
    int max, pos;

    // Inisialisasikan variabel max dengan nilai elemen pertama dari array, yaitu data[0]
    // Inisialisasikan juga variabel pos dengan nilai 0
    max = data[0];
    pos = 0;

    // Buat perulangan untuk mengecek setiap elemen array, mulai dari elemen kedua, yaitu data[1], sampai elemen terakhir, yaitu data[9]
    for (int i = 1; i < 10; i++)
    {
        // Bandingkan nilai elemen array dengan nilai variabel max
        // Jika nilai elemen array lebih besar dari nilai variabel max, maka ubah nilai variabel max dengan nilai elemen array tersebut
        // Ubah juga nilai variabel pos dengan nilai indeks elemen array tersebut
        if (data[i] > max)
        {
            max = data[i];
            pos = i;
        }}

    // Tampilkan nilai terbesar dan indeksnya ke layar
    cout << "Nilai terbesar adalah " << max << " yang berada di indeks ke-" << pos << endl;

    return 0;
}
