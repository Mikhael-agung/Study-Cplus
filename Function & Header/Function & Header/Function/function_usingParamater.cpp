#include<iostream>
#include<string>
using namespace std;

int jumlahMahasiswa;

// Input jumlah mahasiswa
void jumlahDataMahasiswa(){//function no paramater
    cout << "=======================\n";
    cout << "Masukkan Jumlah Data Mahasiswa : ";
    cin >> jumlahMahasiswa;
    cin.ignore(); // Mengabaikan karakter dari buffer data yang di-inputkan
    cout << "=======================\n";
}    

// Input data mahasiswa berupa (nama, npm, jurusan)
//function using paramater, paramater merupakan variable yang digunakan untuk menerima masukkan atau inputan dari luar function
//parameter -> setelah nama function yang ada pada dalam ()
void dataMahasiswa(int jumlahMahasiswa, string nama[], string npm[], string jurusan[]){
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan Nama : ";
        getline(cin, nama[i]);
        cout << "Masukkan NPM : ";
        getline(cin, npm[i]);
        cout << "Masukkan Jurusan : ";
        getline(cin, jurusan[i]);
    }
}

int main() {

    jumlahDataMahasiswa();
    
    string nama[jumlahMahasiswa]; 
    string npm[jumlahMahasiswa]; 
    string jurusan[jumlahMahasiswa];

    dataMahasiswa(jumlahMahasiswa, nama, npm, jurusan);

	system("cls");
    // Menampilkan data mahasiswa
    cout << "=======================\n";
    cout << "Data Mahasiswa:\n";
    cout << "=======================\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa ke-" << i+1 << ":\n";
        cout << "Nama    : " << nama[i] << endl;
        cout << "NPM     : " << npm[i] << endl;
        cout << "Jurusan : " << jurusan[i] << endl;
        cout << "=======================\n";
    }
    return 0;
}

