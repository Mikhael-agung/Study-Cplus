#include <iostream>
using namespace std;

int main()
{
    // inisialiasai dan deklasrasi variable
    int defaultNoRekA = 222222, defaultNoRekB = 333333, nomor_kartu = 123456, password = 10;
    int noRek = 0, kode_kartu, pin, saldo = 1000;
    int nominal = 0;
    int ulang = 0, transfer = 0;
    int pilih;

    // user memasukan pin
    cout << "program Atm\n";
    while (ulang < 3)
    {
        cout << "masukan Nomor kartu anda : ";
        cin >> kode_kartu;
        cout << "masukan Kata sandi anda : ";
        cin >> pin;

        if ((kode_kartu == nomor_kartu) && (pin == password))
        {
            while (pilih != 0)
            {
                cout << "masuk ke menu utama\n";
                cout << "1. Transfer\n";
                cout << "2. Tarik tunai\n";
                cout << "3. info saldo\n";
                cout << "4. setor tunai\n";
                cout << "0. Exit\n";
                cout << "Masukan Pilihan anda: ";
                cin >> pilih;
                switch (pilih)
                {
                case 1: // menu Transfer
                    cout << "Anda berada di Menu transfer\n";
                    while (transfer == 0)
                    {
                        cout << "Masukan No rekening tujuan anda : ";
                        cin >> noRek;
                        if (noRek == defaultNoRekA || noRek == defaultNoRekB ) {
                            
                            cout << "Masukan Nominal: ";
                            cin >> nominal;
                            // pengkondisian jika saldo kurang atau lebih   
                            if (saldo >= nominal ){
                                
                            }
                            
                        }else { 
                            cout <<"Maaf Nomor rekening yang anda masukan tidak terdaftar, Mohon masukan dengan benar \n";
                        }
                    }
                    break;
                case 2: 

                    break;


                default:
                    ulang = 3;
                    break;
                }
            }
        }
        else
        {
            cout << "masukan Pin dengan benar\n";
            ulang++;
            if (ulang == 2)
            {
                cout << "Kesempatan terakhir!!\n";
            }

            if (ulang == 3 ){
                cout << "Kartu anda terblokir\n";
            }
        }
    }

    cout << "Program berhenti";
    return 0;
}