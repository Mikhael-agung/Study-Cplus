// File header.h
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string kalimat, kalimatLama;


// fungsi Membuat kalimat baru 
void createSentence(){
    cout << "Masukkan kalimat baru: ";
    getline(cin, kalimat);
}

// fungsi untuk call by Value
void updateSentenceByValue(string sentence){
    cout << "masukan Kalimat baru: ";
    getline(cin , sentence);
}

// fungsi untuk menjalankan Call by Refrence
void updateSentence(string &sentence){
    kalimatLama = sentence;
    cout << "masukan kalimat baru : ";
    getline(cin, sentence);
    cout << "kalimat sebelum di rubah : " << kalimatLama << endl;
    cout << "Kalimat setelah di rubah : " << sentence << endl;
}

void deleteSentence(){
    kalimat = "";
    cout << "kalimat sudah di hapus";
}

string sentenceAscending (string ){
    sort(sentence.begin(), sentence.end());
}

void sentenceDescending(){
    sort(sentence)
}
