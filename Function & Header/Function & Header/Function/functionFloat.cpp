#include<iostream>
#include<string>
using namespace std;

// Input jumlah mahasiswa
/*function Float() untuk mengembalikan nilai yang bertipe Float, Jika function Float() 
di rubah menjadi selain function Float() contohnya "string jumlahDataMahasiswa()" maka dia akan error
karena tipe data yang digunakan jumlah berupa Float. Function Float() Kurang Lebih sama dengan Function Int().
*/
float jumlahDataMahasiswa(){
    float jumlah;
    cout << "=======================\n";
    cout << "Masukkan Jumlah Data Mahasiswa : ";
    cin >> jumlah;
    cin.ignore(); // Mengabaikan karakter dari buffer data yang di-inputkan
    cout << "=======================\n";
    return jumlah;//return jumlah berfungsi sebagai menjalankannya function atau mengembalikan nilai dari function tersebut. 
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

