// File main.cpp
#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int pilih;
    string kalimatAwal, kalimatBaru;

    cout << "Tugas Asistensi " << endl;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    do
    {
        cout << "Menu Utama" << endl;
        cout << "1. Tampilkan Kalimat\n";
        cout << "2. Buat Kalimat baru\n";
        cout << "3. Ubah kalimat (Call by Value)\n";
        cout << "4. Ubah kalimat (Call by Reference)\n";
        cout << "5. Hapus Kalimat\n";
        cout << "6. Urutkan kalimat ascending\n";
        cout << "7. Urutkan kalimat Descending\n";
        cout << "8. Tampilkan huruf vokal\n";
        cout << "9. Out\n";
        cout << "Masukkan pilihan: ";
        cin >> pilih;
        cin.ignore();
        switch (pilih)
        {
        case 1:
            if (kalimat == "")
            {
                cout << "maaf anda belum menuliskan kata apapun ";
            }
            else
            {
                cout << "Kalimat yang Anda masukkan: " << kalimat << endl;
            }
            break;

        case 2:
            createSentence();
            cout << "Kalimat baru yang Anda buat: " << kalimat << endl;
            break;

        case 3:
            updateSentenceByValue(kalimat);
            cout << "kalimat awal: " << kalimat << endl;
            cout << "kalimat Setelah melakukan pemanggilan fungsi (call by Value): " << kalimat << endl;
            break;

        case 4:
            cout << "Kalimat awal : " << kalimat << endl;
            updateSentence(kalimat);
            cout << "kalimat Setelah melakukan pemanggilan fungsi (call by refrence) : " << kalimat << endl;
            break;

        case 5:
            deleteSentence();
            cout << endl;
            break;

        case 6:
            kalimatAwal = kalimat;
            kalimat = sentenceAscending(kalimat);
            cout << "kalimat yang di hasilkan " << kalimat << endl;
            break;

        case 7:
            kalimatAwal = kalimat;
            kalimat = sentenceDescending(kalimat);
            cout << "Kalimat yang di hasilkan " << kalimat << endl;
            break;

        case 8:
            // kalimatAwal = kalimat;
            showVokalSentences(kalimat);
            cout << "Kalimat yang dihasilkan dari huruf Vokal :" << kalimat << endl;
            break;

        default:
            pilih = 9;
            break;
        }

        if(pilih != 9 && pilih != 1){
            confirm(pilih);
        }
    } while (pilih != 9);
    cout << "THX BROO";
    return 0;
}
