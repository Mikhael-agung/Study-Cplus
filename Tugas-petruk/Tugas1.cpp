#include <iostream>
using namespace std;

int main()
{
    // inisialiasai dan deklasrasi variable
    int defaultNoRekA = 222222, defaultNoRekB = 333333, nomor_kartu = 123456,
        password = 10, input_pin = 0, input_rek = 0;
    int inputNoRek = 0, saldo = 1000, mainMenu = 0, pilih;
    // int withDraw = 0;
    int konfirmasi, pin_transaction;
    // int pecahan100 = 100, pecahan;
    int ulang = 0, menuUtama = 0, nominal = 0;

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
                cout << "1. Transfer Uang\n";
                cout << "2. Tarik tunai\n";
                cout << "3. info saldo\n";
                cout << "4. setor tunai\n";
                cout << "0. Exit\n";
                cout << "Masukan Pilihan anda: ";
                cin >> pilih;
                menuUtama = 0;
                switch (pilih)
                {
                case 1: // menu Transfer
                    cout << "Anda berada di Menu Transfer\n";
                    while (menuUtama == 0)
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
                                cout << "NO Rekening yang anda masukan " << inputNoRek << endl;
                                cout << "Nominal yang anda masukan " << nominal << endl;
                                cout << "Apakah yang anda masukan sudah benar? \n (bila ya klik 1 atau tidak klik 0) : ";
                                cin >> konfirmasi;
                                if (konfirmasi != 0)
                                {
                                    // password confirm
                                    mainMenu = 0;
                                    while (mainMenu < 3)
                                    {
                                        // user menginputkan pin jika transaksi sudah benar
                                        cout << "masukan password Konfirmasi : ";
                                        cin >> pin_transaction;
                                        // mengidentifikasi password transaksi salah / benar
                                        if (pin_transaction == input_pin)
                                        {
                                            saldo = saldo - nominal;
                                            cout << "menuUtama yang anda lakukan berhasil";
                                            cout << "sisa saldo anda adalah " << saldo << endl;
                                            // jika user ingin melakukan transaksi lagi.
                                            cout << "apakah anda ingin melakukan transaksi lagi\n (jika iya ketik 1 dan tidak ketik 0)" << endl;
                                            cin >> pilih;
                                            if (pilih != 0)
                                            {
                                                menuUtama = 1;
                                            }
                                            else
                                            {
                                                cout << "terima kasih sudah melakukan transaksi\n";
                                                mainMenu = 1;
                                                menuUtama = 3;
                                                ulang = 3;
                                            }
                                        }
                                        else
                                        {
                                            cout << "masukan Password dengan benar";
                                            mainMenu++;
                                            if (mainMenu == 2)
                                            {
                                                cout << "Ini Kesempatan Terakhir!!!";
                                            }
                                            if (mainMenu == 3)
                                            {
                                                cout << "kartu anda terblokir tolong Hubungi CS bank";
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    cout << "apakah anda ingin merubah NO rekening yang di tuju??\n (KLIK 1 Bila YA dan 0 Bila Tidak)";
                                    cin >> konfirmasi;
                                    if (konfirmasi != 0)
                                    {
                                        menuUtama = 0;
                                    }
                                    else
                                    {
                                        ulang = 3;
                                    }
                                }
                            }
                            else
                            {
                                cout << "Maaf saldo Anda Tidak cukup untuk melakukan transaksi\n";
                                cout << "apakah anda ingin melakukan transaksi kembali\n (KLIK 1 bila YA dan 0 bila TIDAK)";
                                cin >> konfirmasi;
                                if (konfirmasi != 0)
                                {
                                    menuUtama = 1;
                                    ulang = 3;
                                }
                                else
                                {
                                    mainMenu = 1;
                                    menuUtama = 3;
                                    ulang = 3;
                                }
                            }
                        }
                        else
                        {
                            cout << "Maaf Nomor rekening yang anda masukan tidak terdaftar, Mohon masukan dengan benar \n";
                            cout << "apakah anda ingin menginputkanya kembali\n (klik 1 Jika YA dan 0 Jika Tidak)";
                            cin >> konfirmasi;
                            if (konfirmasi != 0)
                            {
                                menuUtama = 1;
                                ulang = 3;
                            }
                            else
                            {
                                ulang = 3;
                            }
                        }
                    }
                    break;
                case 2:
                    // // tarik tunai
                    // cout << "Menu Tarik Tunai";
                    // cout << "Silakan Pilih Nominal Yang ingin anda ambil  ";
                    // cout << "1. Pecahan 100RB";
                    // cout << "2. Pecahan 50RB";
                    // cout << pilih;

                    // while ()
                    // {
                    //     /* code */
                    // }

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
    cout << "program selesai";
    return 0;
}
