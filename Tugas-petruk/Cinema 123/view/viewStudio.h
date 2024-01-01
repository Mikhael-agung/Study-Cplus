#include <iostream>
#include <string>
#include "../model/modelStudio.h"

using namespace std;

void vAddStudio(){
    string inpnamaStudio;
    int inpjumlahKursi;
    cout << "Masukan Nama studio : ";
    cin >> inpnamaStudio;
    cout << "Masukan jumlah Kursi : ";
    cin >> inpjumlahKursi;
    mAddStudio(inpnamaStudio, inpjumlahKursi);
}

void vViewStudios(){
    mViewStudios();
}

void vSearchStudio (){
    string inpNamaStudio;
    cout << "Masukan nama studio : ";
    cin >> inpNamaStudio;
    int index = mSearchStudio(inpNamaStudio);
    if(index != -1){
        cout << "Data Studio\n";
        cout << "Nama Studio : " << namaStudio[index] << endl;
        cout << "Jumlah Kursi : " << jumlahKursi[index] <<endl;
        cout << endl;
    }else {
        cout << "Maaf studio yang anda cari tidak ada";
    }
}