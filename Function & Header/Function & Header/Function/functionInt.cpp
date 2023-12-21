#include<iostream>
#include<string>
using namespace std;

// Input jumlah mahasiswa
/*function int() untuk mengembalikan nilai yang bertipe int, Jika function int() 
di rubah menjadi selain function int() contohnya "string jumlahDataMahasiswa()" maka dia akan error
karena tipe data yang digunakan jumlah berupa int
*/
int jumlahDataMahasiswa(){
    int jumlah;
    cout << "=======================\n";
    cout << "Masukkan Jumlah Data Mahasiswa : ";
    cin >> jumlah;
    cin.ignore(); // Mengabaikan karakter dari buffer data yang di-inputkan
    cout << "=======================\n";
    return jumlah;//return jumlah berfungsi sebagai menjalankannya function atau mengembalikan nilai dari function  
}    

// Input data mahasiswa berupa (nama, npm, jurusan)
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
    int jumlahMahasiswa = jumlahDataMahasiswa();
    
    string nama[jumlahMahasiswa]; 
    string npm[jumlahMahasiswa]; 
    string jurusan[jumlahMahasiswa];

    dataMahasiswa(jumlahMahasiswa, nama, npm, jurusan);

    // Menampilkan data mahasiswa
    system("cls");
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

