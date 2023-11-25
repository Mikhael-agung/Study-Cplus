#include <iostream>
using namespace std;

int main()
{
    // Deklarasikan variabel array yang berisi angka-angka yang ingin Anda bandingkan
    int data[10] = {12, 45, 67, 23, 89, 34, 76, 54, 90, 11};

    // Deklarasikan variabel lain yang akan digunakan untuk menyimpan nilai terbesar dan indeksnya
    int max, pos;

    max = data[0];
    pos = 0;

    // Buat perulangan untuk mengecek setiap elemen array, mulai dari elemen kedua, yaitu data[1], sampai elemen terakhir, yaitu data[9]
    for (int i = 1; i < 10; i++)
    {
        if (data[i] > max)
        {
            max = data[i];
            pos = i;
        }}

    // Tampilkan nilai terbesar dan indeksnya ke layar
    cout << "Nilai terbesar adalah " << max << " yang berada di indeks ke-" << pos << endl;

    return 0;
}
