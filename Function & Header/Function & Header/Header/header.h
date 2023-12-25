#include<iostream>
#include<string>
using namespace std;

//variable bersifat global
int jumlahMahasiswa;
string nama[100]; 
string npm[100]; 
string jurusan[100];


// Input jumlah mahasiswa
void jumlahDataMahasiswa(){
    cout << "=======================\n";
    cout << "Masukkan Jumlah Data Mahasiswa : ";
    cin >> jumlahMahasiswa;
    cin.ignore();//cin.ignore() -> mengabaikan karaktker dari buffer data yang di inputkan
    cout << "=======================\n";
}    

// Input data mahasiswa berupa (nama, npm, jurusan)
void dataMahasiswa(){
    jumlahDataMahasiswa();
    
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan Nama : ";
        getline(cin, nama[i]);
        cout << "Masukkan NPM : ";
        getline(cin, npm[i]);
        cout << "Masukkan Jurusan : ";
        getline(cin, jurusan[i]);
    }
}
