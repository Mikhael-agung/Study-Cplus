#include <iostream>
#include <string>
#include "../database/databaseFilm.h"

void mAddFilm(string inpJudulFilm, string inpDurasiFilm, string inpGenreFilm)
{
    judulFilm[nFilm] = inpJudulFilm;
    durasiFilm[nFilm] = inpDurasiFilm;
    genreFilm[nFilm] = inpGenreFilm;
    nFilm++;
}

void mViewFilm()
{
    cout << "Data Film" << endl;
    cout << "judul Film\t\t Durasi \t\t Genre" << endl;
    cout << "==================================================================" << endl;
    for (int i = 0; i < nFilm; i++)
    {
        cout << judulFilm[i] << "\t\t\t" << durasiFilm[i]<< "\t\t" << genreFilm[i] << endl; 
    }
    cout << endl;
}

int mSearchFilm(string inpjudulFilm)
{
    int index = -1;
    for (int i = 0; i < nFilm; i++)
    {
        if(judulFilm[i] == inpjudulFilm){
            index = i;
            break;
        }
    }

    return index;
}