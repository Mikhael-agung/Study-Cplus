#include "../database/databaseStudio.h"
#include <string>
#include <iostream>

using namespace std;

void mAddStudio(string inpNamaStudio, int inpJumlahKursi)
{
    namaStudio[nStudio] = inpNamaStudio;
    jumlahKursi[nStudio] = inpJumlahKursi;
    nStudio++;
}

void mViewStudios()
{
    cout << "Data Studio\n";
    for (int i = 0; i < nStudio; i++)
        if (namaStudio[i] == "" && jumlahKursi[i] == 0)
        {
            cout << "Maaf tidak ada studio yang di gunakan sekarang";
        }
        else
        {
            cout << "Nama Studio " << namaStudio[i] << endl;
            cout << "Jumlah Kursi " << jumlahKursi[i] << endl;
            cout << endl;
        }
}

int mSearchStudio(string inpNamaStudio)
{
    int index = -1;
    for (int i = 0; i < nStudio; i++)
    {
        if (namaStudio[i] == inpNamaStudio)
        {
            index = i;
            break;
        }else{
            cout << "Film yang anda cari tidak di temukan" <<endl;
        }
    }
    return index;
}