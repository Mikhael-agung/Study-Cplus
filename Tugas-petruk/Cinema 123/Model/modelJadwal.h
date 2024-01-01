#include <string>
#include <iostream>
#include "../database/databaseJadwal.h"

using namespace std;

void mAddJadwal(string inpJamTayang, string inpTanggalTayang, string inpNamaStudioTayang, string inpJudulFilmTayang, int inpHargaTiket)
{
    int indexStudio = mSearchStudio(inpNamaStudioTayang);
    int indexFilm = mSearchFilm(inpJudulFilmTayang);
    // cout << "index studio : " << indexStudio << endl;
    if (indexStudio != -1 && indexFilm != -1)
    {
        kodeTayang[nJadwal] = nJadwal + 1;
        jamTayang[nJadwal] = inpJamTayang;
        tanggalTayang[nJadwal] = inpTanggalTayang;
        namaStudioTayang[nJadwal] = inpNamaStudioTayang;
        judulFilmTayang[nJadwal] = inpJudulFilmTayang;
        hargaTiket[nJadwal] = inpHargaTiket;
        nJadwal++;
    }
    else
    {
        cout << "Studio atau Film yang anda cari tidak ada\n";
    }
}

void mViewJadwal()
{
    cout << "Daftar Jadwal" << endl;
    for (int i = 0; i < nJadwal; i++)
    {
        cout << "Kode Tayang : " << kodeTayang[i] << endl;
        cout << "Jam tayang : " << jamTayang[i] << endl;
        cout << "Tanggal Tayang : " << tanggalTayang[i] << endl;
        cout << "Nama Studio Tayang : " << namaStudioTayang[i] << endl;
        cout << "Judul Film Tayang : " << judulFilmTayang[i] << endl;
        cout << "Harga Tiket : " << hargaTiket[i] << endl;
        cout << endl;
    }
}

int mSearchJadwal(int inpKodeTayang) {
    int index = -1;
    for(int i = 0; i < nJadwal; i++){
        if(kodeTayang[i] == inpKodeTayang){
            index = i;
            break;
        }
    }
    return index;
}