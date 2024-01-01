#include "../model/modelJadwal.h"
#include <string>
#include <iostream>

using namespace std;

void vAddJadwal(){
    string inpJamTayang, inpTanggalTayang, inpNamaStudioTayang, inpJudulFilmTayang;
    int inpHargaTiket;
    cout << "Masukan Jam tayang :";
    getline(cin, inpJamTayang);
    cout << "Masukan Tanggal Tayang : ";
    getline(cin, inpTanggalTayang);
    cout << "Masukan Nama studio Tayang: ";
    getline(cin, inpNamaStudioTayang);
    cout << "Masukan Judul Film Tayang: ";
    getline(cin, inpJudulFilmTayang);
    cout << "Masukan Harga Tiket: ";
    cin >> inpHargaTiket;
    cin.ignore(); // Mengosongkan buffer input
    mAddJadwal(inpJamTayang, inpTanggalTayang, inpNamaStudioTayang, inpJudulFilmTayang, inpHargaTiket);
}


void vViewJadwal()
{
    mViewJadwal();
}

void vSearchJadwals()
{
    int inpKodeTayang;
    cout << "Masukan Kode Tayang Film : ";
    cin >> inpKodeTayang;
    cin.ignore();
    cout << "Kode Tayang \t\t Jam Tayang \t\t Tanggal Tayang \t\t Nama Studio \t\t Judul Film \t\t Harga Tiket " << endl;
    int index = mSearchJadwal(inpKodeTayang);
    if (index != -1)
    {
        cout << kodeTayang[index] << "\t\t" << jamTayang[index] << "\t\t" << tanggalTayang[index] << "\t\t" << namaStudioTayang[index] << "\t\t" << judulFilmTayang[index] << "\t\t" << hargaTiket[index] << endl;
        cout << endl;
    }
    else
    {
        cout << "Maaf Jadwal yang anda cari tidak di temukan";
    }
}
