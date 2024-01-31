// File header.h
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string kalimat, kalimatLama, kalimatAwal;

void confirm(int &pilih)
{
    char konfirmasi;
    cout << "Kembali Ke menu Utama? (Y/N): ";
    cin >> konfirmasi;
    if (konfirmasi == 'y' || konfirmasi == 'Y')
    {
        pilih = 0;
    }

    if (konfirmasi == 'n' || konfirmasi == 'N'){
        pilih = 9;
    }
}

// fungsi Membuat kalimat baru
void createSentence()
{
    cout << "Masukkan kalimat baru: ";
    getline(cin, kalimat);
}

// fungsi untuk call by Value
void updateSentenceByValue(string sentence)
{
    cout << "masukan Kalimat baru: ";
    getline(cin, sentence);
}

// fungsi untuk menjalankan Call by Refrence
void updateSentence(string &sentence)
{
    kalimatLama = sentence;
    cout << "masukan kalimat baru : ";
    getline(cin, sentence);
    cout << "kalimat sebelum di rubah : " << kalimatLama << endl;
    cout << "Kalimat setelah di rubah : " << sentence << endl;
}

void deleteSentence()
{
    kalimat = "";
    cout << "kalimat sudah di hapus";
}

string sentenceAscending(string sentence)
{
    stringstream ss(sentence);
    string word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }

    sort(words.begin(), words.end()); //* perubahan hanya di sini untuk Descending menjadi rbegin dan rend
    string sorted_sentence;
    for (const string &word : words)
    {
        sorted_sentence += word + " ";
    }
    return sorted_sentence;
}

string sentenceDescending(string sentence)
{
    stringstream ss(sentence);
    string word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }

    sort(words.rbegin(), words.rend());
    string sorted_sentence;
    for (const string &word : words)
    {
        sorted_sentence += word + " ";
    }
    return sorted_sentence;
}

void showVokalSentences(string sentence){
    cout << "Huruf vokal dalam kalimat: ";
    for(char c : sentence){
        c = tolower(c);
        if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'){
            cout << c << " ";
        }
    }
    cout << endl;
}
