#include <iostream>
using namespace std;

int main()
{
    // inisialiasai dan deklasrasi variable
    int defaultNoRekA = 222222, defaultNoRekB = 333333, nomor_kartu = 123456, password = 10, input_pin = 0, input_rek = 0;
    int inputNoRek = 0, saldo = 1000;
    int konfirmasi, pilih;
    int nominal = 0;
    int ulang = 0, transfer = 0;

    // user memasukan pin
    cout << "program Atm\n";
    cout << pilih << endl;
    while (ulang < 3)
    {
        cout << "masukan Nomor kartu anda : ";
        cin >> input_rek;
        cout << "masukan Kata sandi anda : ";
        cin >> input_pin;

        if (input_rek == nomor_kartu && input_pin == password)
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
                        cin >> inputNoRek;
                        if (inputNoRek == defaultNoRekA || inputNoRek == defaultNoRekB)
                        {

                            cout << "Masukan Nominal: ";
                            cin >> nominal;
                            // pengkondisian jika saldo kurang atau lebih
                            if (saldo >= nominal)
                            {

                                // melakukan konfirmasi
                                cout << "NO Rekening yang anda masukan" << inputNoRek << endl;
                                cout << "Nominal yang anda masukan " << nominal << endl;
                                cout << "Apakah yang anda masukan sudah benar? \n (bila ya klik 1 atau tidak klik 0)\n";
                                cin >> konfirmasi;

                                if (konfirmasi == 1)
                                {
                                    cout << "transaksi berhasil\n";
                                    transfer = 1;
                                }
                                else
                                {
                                    cout << "transaksi Dibatalkan";
                                    transfer = 0;
                                }
                            }
                        }
                        else
                        {
                            cout << "Maaf Nomor rekening yang anda masukan tidak terdaftar, Mohon masukan dengan benar \n";
                        }
                        transfer = 0;
                        break;
                    case 2:
                        break;
                    case 0:
                        ulang = 3;
                        cout << "Program berhenti";
                        break;
                    default:
                        ulang = 3;
                        break;
                    }
                }
            }
        }else
            {
                cout << "masukan Pin dengan benar\n";
                ulang++;
                if (ulang == 2)
                {
                    cout << "Kesempatan terakhir!!\n";
                }

                if (ulang == 3)
                {
                    cout << "Kartu anda terblokir\n";
                }
            }
        }
        return 0;
    }
