#include <iostream>
#include <string>
#include "../model/modelFilm.h"

using namespace std;

void vAddFilm()
{
    string inpNamaFilm, inpDurasiFilm, inpGenreFilm;
    cout << "Masukan nama Film : ";
    cin.ignore();
    getline(cin, inpNamaFilm);
    cout << "Masukan durasi Film : ";
    getline(cin, inpDurasiFilm);
    cout << "Masukan Genre Film : ";
    getline(cin, inpGenreFilm);
    mAddFilm(inpNamaFilm, inpDurasiFilm, inpGenreFilm);
    cout << endl;
}

void vViewFilms()
{
    mViewFilm();
}

void vSearchFilms()
{
    string inpNamaFilm;
    cout << "Masukan nama Film: ";
    cin >> inpNamaFilm;
    int index = mSearchFilm(inpNamaFilm);
    if (index != -1)
    {
        cout << "Nama Film \t\t Durasi Film \t\t Genre Film" << endl;
        cout << judulFilm[index] << "\t\t\t" << durasiFilm[index] <<"\t\t\t" << genreFilm[index] << endl;
    } else {
        cout << "Maaf film yang anda cari tidak tersedia!" << endl;
    }
}