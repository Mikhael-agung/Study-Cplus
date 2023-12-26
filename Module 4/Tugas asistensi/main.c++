// File main.cpp
#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int pilih;
    char konfirmasi, pengganti;
    string kalimatAwal;

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
                // cout << "kembali ke menu Utama : ";
                // cin >> konfirmasi;
                // if (konfirmasi == 'y' || konfirmasi == 'Y')
                // {
                //     pilih = 0;
                // }
                // else
                // {
                //     pilih = 9;
                // }
            }
            else
            {
                cout << "Kalimat yang Anda masukkan: " << kalimat << endl;
                // cout << "Kembali ke menu utama: ";
                // cin >> konfirmasi;
                // if (konfirmasi == 'Y' || konfirmasi == 'y')
                // {
                //     pilih = 0;
                // }
                // else
                // {
                //     pilih = 9;
                // }
            }
            break;

        case 2:
            createSentence();
            cout << "Kalimat baru yang Anda buat: " << kalimat << endl;
            // cout << "Kembali ke menu Utama: ";
            confirm(konfirmasi); //trial
            // cin >> konfirmasi;
            // if (konfirmasi == 'Y' || konfirmasi == 'y')
            // {
            //     pilih = 0;
            // }
            // else
            // {
            //     pilih = 9;
            // }
            break;
        case 3:
            updateSentenceByValue(kalimat);
            cout << "kalimat awal: " << kalimat << endl;
            cout << "kalimat Setelah melakukan pemanggilan fungsi (call by Value): " << kalimat << endl;
            confirm(pilih); // Trial
            // cout << "kembali ke menu Utama? : ";
            // cin >> konfirmasi;
            // if (konfirmasi == 'Y' || konfirmasi == 'y')
            // {
            //     pilih = 0;
            // }
            // else
            // {
            //     pilih = 9;
            // }
            break;

        case 4:
            cout << "Kalimat awal : " << kalimat << endl;
            updateSentence(kalimat);
            cout << "kalimat Setelah melakukan pemanggilan fungsi (call by refrence) : " << kalimat << endl;
            cout << "kembali ke menu Utama? : ";
            cin >> konfirmasi;
            if (konfirmasi == 'Y' || konfirmasi == 'y')
            {
                pilih = 0;
            }
            else
            {
                pilih = 9;
            }
            break;

        case 5:
            deleteSentence();
            cout << endl;
            cout << "kembali ke menu utama? (Y/N): ";
            cin >> konfirmasi;
            if (konfirmasi == 'y' || konfirmasi == 'Y')
            {
                pilih = 0;
            }
            if (konfirmasi == 'n' || konfirmasi == 'N')
            {
                pilih = 9;
            }
            break;

        case 6:
            kalimatAwal = kalimat;
            kalimat = sentenceAscending(kalimat);
            cout << "kalimat yang di hasilkan " << kalimat << endl;
            cout << "Kembali ke menu Utama(Y/N) : ";
            cin >> konfirmasi;
            if (konfirmasi == 'y' || konfirmasi == 'Y')
            {
                pilih = 0;
            }

            if (konfirmasi == 'n' || konfirmasi == 'N')
            {
                pilih = 9;
            }
            break;

        case 7:
            kalimatAwal = kalimat;
            kalimat = sentenceDescending(kalimat);
            cout << "Kalimat yang di hasilkan " << kalimat << endl;
            cout << "Kembali ke menu Utama(Y/N) : ";
            cin >> konfirmasi;
            if (konfirmasi == 'y' || konfirmasi == 'Y')
            {
                pilih = 0;
            }

            if (konfirmasi == 'n' || konfirmasi == 'N')
            {
                pilih = 9;
            }
            break;

        case 8:
            // kalimatAwal = kalimat;
            cout << "Masukkan huruf vokal pengganti: ";
            cin >> pengganti;
            kalimat = showVokalSentences(kalimatAwal, pengganti);
            cout << "Kalimat yang dihasilkan dari huruf Vokal " << kalimat << endl;
            cout << "Kembali ke menu Utama? (Y/N): ";
            cin >> konfirmasi;
            if (konfirmasi == 'y' || konfirmasi == 'Y')
            {
                pilih = 0;
            }
            else
            {
                pilih = 9;
            }
            break;

        default:
            pilih = 9;
            break;
        }

        if(pilih != 9){
            cout << "Kembali Ke menu Utama? (Y/N): ";
            cin >> konfirmasi;
            cin.ignore();
            if(konfirmasi == 'y' || konfirmasi == 'Y'){
                pilih = 0;
            }else{
                pilih = 9;
            }
        }
    } while (pilih != 9);
    cout << "THX BROO";
    return 0;
}
