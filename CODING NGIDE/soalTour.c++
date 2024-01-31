#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // Deklarasi variabel
    string kalimat = "FINAL LOMBA STRUCTURED PROGRAMMING";
    vector<int> nilaiHuruf(26);
    int totalKonversi = 0;

    // Inisialisasi nilai huruf
    for (int i = 0; i < 26; i++){
        nilaiHuruf[i] = i + 1;
    }

    // Konversi huruf ke angka
    for (char huruf : kalimat){
        totalKonversi += nilaiHuruf[tolower(huruf) - 'a'];
    }

    // Hitung rata-rata konversi per kata
    int jumlahKata = count(kalimat.begin(), kalimat.end(), ' ') + 1;
    double rataRataKonversi = (double)totalKonversi / jumlahKata;

    for (char huruf : kalimat)
    {
        cout << huruf << ": " << nilaiHuruf[tolower(huruf) - 'a'] << " ";
    }

    cout << endl;
    cout << "Hasil angka berdasarkan urutan huruf: ";
    for (char huruf : kalimat)
    {   
        if(huruf != ' '){
        cout << nilaiHuruf[tolower(huruf) - 'a'] << " ";
        }
    }

    cout << endl;

    // Tampilkan hasil
    cout << endl;
    cout << "Total hasil konversi: " << totalKonversi << endl;
    cout << "Rata-rata hasil konversi per kata: " << rataRataKonversi << endl;

    return 0;
}
