#include<iostream>
#include<string>
using namespace std;

int jumlahMahasiswa;
string nama[100];
string npm[100];
string jurusan[100];

// Fungsi untuk meminta jumlah mahasiswa secara rekursif
void jumlahDataMahasiswa() {
    cout << "=======================\n";
    cout << "Masukkan Jumlah Data Mahasiswa : ";
    cin >> jumlahMahasiswa;
    cin.ignore(); // Mengabaikan karakter dari buffer data yang di-inputkan
    cout << "=======================\n";

	//rekursif -> Memanggil kembali fungsi jika jumlah Mahasisa adalah 0, harus lebih dari 0.
    if (jumlahMahasiswa <= 0) {
        cout << "Jumlah mahasiswa harus lebih dari 0.\n";
        jumlahDataMahasiswa(); 
    }
}

// Fungsi rekursif untuk mengisi data mahasiswa
void isiDataMahasiswa(int index) {
    if (index < jumlahMahasiswa) {
        cout << "Masukkan Nama : ";
        getline(cin, nama[index]);
        cout << "Masukkan NPM : ";
        getline(cin, npm[index]);
        cout << "Masukkan Jurusan : ";
        getline(cin, jurusan[index]);
        isiDataMahasiswa(index + 1); // Rekursi ke elemen berikutnya
    }
}

int main() {
    jumlahDataMahasiswa();
    isiDataMahasiswa(0); // Memanggil fungsi rekursif untuk mengisi data

    // Menampilkan data mahasiswa
	system("cls");
    cout << "=======================\n";
    cout << "Data Mahasiswa:\n";
    cout << "=======================\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa ke-" << i + 1 << ":\n";
        cout << "Nama    : " << nama[i] << endl;
        cout << "NPM     : " << npm[i] << endl;
        cout << "Jurusan : " << jurusan[i] << endl;
        cout << "=======================\n";
    }
    return 0;
}

