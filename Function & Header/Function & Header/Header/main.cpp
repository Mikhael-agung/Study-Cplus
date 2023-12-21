#include "header.h" /*untuk menghubungkan dengan file header.h jika tidak dihubungkan maka program bisa berjalan. 
Namun tidak bisa berinteraksi atau melakukan inputan dan lainnya pada program tersebut*/
using namespace std;

int main() {
    dataMahasiswa();

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

