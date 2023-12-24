// File header.h
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string kalimat;

void createSentence(){
    cout << "Masukkan kalimat baru: ";
    getline(cin, kalimat);
}
