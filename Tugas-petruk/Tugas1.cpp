#include <iostream>
using namespace std;

int main()
{
    // inisialiasai dan deklasrasi variable
    int defaultNoRekA = 222222, defaultNoRekB = 333333, nomor_kartu = 123456,
        password = 10, input_pin = 0, input_rek = 0;
    int inputNoRek = 0, saldo = 1000, pass_transaction = 0, pilih;
    int konfirmasi, pin_transaction;
    int ulang = 0, transfer = 0, nominal = 0;

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
                                cout << "Apakah yang anda masukan sudah benar? \n (bila ya klik 1 atau tidak klik 0) : ";
                                cin >> konfirmasi;
                                if (konfirmasi != 0)
                                {
                                    // password confirm
                                    pass_transaction = 0;
                                    while (pass_transaction < 3)
                                    {
                                        // user menginputkan pin jika transaksi sudah benar
                                        cout << "masukan password Konfirmasi : ";
                                        cin >> pin_transaction;
                                        // mengidentifikasi password transaksi salah / benar
                                        if (pin_transaction == input_pin)
                                        {
                                            saldo = saldo - nominal;
                                            cout << "transfer yang anda lakukan berhasil";
                                            cout << "sisa saldo anda adalah " << saldo << endl;
                                            // jika user ingin melakukan transaksi lagi.
                                            cout << "apakah anda ingin melakukan transaksi lagi\n (jika iya ketik 1 dan tidak ketik 0)" << endl;
                                            cin >> pilih;
                                            if (pilih != 0)
                                            {
                                                transfer =1; 
                                                pass_transaction= 3;
                                            } else {
                                                cout << "terima kasih sudah melakukan transaksi";
                                            }
                                        }
                                        else
                                        {
                                            cout << "masukan Password dengan benar";
                                            pass_transaction++;
                                            if (pass_transaction == 2)
                                            {
                                                cout << "Ini Kesempatan Terakhir!!!";
                                            }
                                            if (pass_transaction == 3)
                                            {
                                                cout << "kartu anda terblokir tolong Hubungi CS bank";
                                            }
                                        }
                                    }
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
                        pilih = 0;
                        break;
                    }
                }
            }
        }
        else
        {
            cout << "masukan Pin dengan benar atau nomor kartu dengan benar\n";
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
