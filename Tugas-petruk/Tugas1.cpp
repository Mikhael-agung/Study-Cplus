#include <iostream>
using namespace std;

int main()
{
    // inisialiasai dan deklasrasi variable
    int defaultNoRekA = 222222, defaultNoRekB = 333333, nomor_kartu = 123456,
        password = 10, input_pin = 0, input_rek = 0;
    int inputNoRek = 0, saldo = 1000, pass_transaction = 0, pilih;
    int konfirmasi, pin_transaction;
    int pecahan100 = 100, pecahan50, pecahan;
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
                                cout << "NO Rekening yang anda masukan " << inputNoRek << endl;
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
                                                transfer = 1;
                                                pass_transaction = 3;
                                            }
                                            else
                                            {
                                                cout << "terima kasih sudah melakukan transaksi\n";
                                                transfer = 1;
                                                pass_transaction = 3;
                                                ulang = 3;
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
                        // tarik tunai
                        cout << "anda masuk ke menu Tarik Tunai";
                        while (pecahan != 0)
                        {
                            cout << "pilih pecahan yang ingin anda Ambil :";
                            cout << "1. Pecahan 100RB";
                            cout << "2. Pecahan 50RB";
                            cin >> pecahan;
                            switch (pecahan)
                            {
                                // Pecahan 100RB
                            case 1:
                                cout << "masukan nominal yang ingin anda ambil \n";
                                cin >> nominal;
                                if (nominal >= saldo)
                                {
                                    // konfirmasi transaksi
                                    pass_transaction = 0;
                                    while (pass_transaction < 3)
                                    {
                                        cout << "masukan password anda";
                                        cin >> pin_transaction;
                                        if (pin_transaction == password)
                                        {
                                            if (nominal % pecahan100 == 0)
                                            {
                                                pecahan50 = nominal / pecahan100;
                                                saldo = saldo - nominal;
                                                cout << "sisah saldo anda " << saldo << endl;
                                                cout << "apakah anda ingin melakukan transaksi lagi \n (klik 1 bila YA dan 0 bila TIDAK)";
                                                cin >> pilih;
                                                if (pilih != 0)
                                                {
                                                    pecahan = 1;
                                                    pass_transaction = 3;
                                                }
                                                else
                                                {
                                                    pecahan = 1;
                                                    pass_transaction = 3;
                                                    ulang = 3;
                                                }
                                            }
                                            else
                                            {
                                                cout << "maaf pengambilan uang minimal 100RB";
                                                cout << "apakah anda ingin melakukan transaksi lagi\n (klik 1 bila YA dan 0 bila TIDAK)";
                                                cin >> pilih;
                                                if (pilih != 0)
                                                {
                                                    pilih = 1;
                                                    pecahan100 = 3;
                                                }
                                                else
                                                {
                                                }
                                            }
                                        }
                                        else
                                        {
                                            pass_transaction++;
                                            cout << "pin yang anda masukan salah";
                                            if (pass_transaction == 2)
                                            {
                                                cout << "Ini kesempatan terakhir, mohon masukan dengan benar";
                                            }
                                            if (pass_transaction == 3)
                                            {
                                                cout << "Kartu anda terblokir mohon Hubungi CS kami";
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    cout << "Saldo anda tidak cukup";
                                    cout << "apakah anda ingin melakukan transaksi lagi\n (jika iya ketik 1 dan tidak ketik 0)" << endl;
                                    cin >> pilih;
                                    if (pilih == 0)
                                    {
                                        ulang = 3;
                                    }
                                }
                                break;
                                // PECAHAN 50RB
                            case 2:
                                cout << "masukan nominal yang ingin anda ambil\n ";
                                cin >> nominal;
                                if (nominal >= saldo)
                                {
                                    // konfirmasi transaksi
                                    pass_transaction = 0;
                                    while (pass_transaction < 3)
                                    {
                                        // user menginputkan pass transaksi
                                        cout << "masukan password anda";
                                        cin >> pass_transaction;
                                        if (pass_transaction == password)
                                        {
                                            if (nominal % pecahan50 == 0)
                                            {
                                                pecahan50 = nominal / pecahan50;
                                                saldo = saldo - nominal;
                                                cout << "sisa saldo anda" << saldo << endl;
                                            }
                                            else
                                            {
                                                cout << "pengambilan Minimal 50" << endl;
                                            }
                                        }
                                        else
                                        {
                                            cout << "Maaf password yang anda masukan salah";
                                            pass_transaction++;
                                            if (pass_transaction == 2)
                                            {
                                                cout << "Ini kesempatan terakhir, mohon masukan dengan benar";
                                            }
                                            if (pass_transaction == 3)
                                            {
                                                cout << "Kartu anda terblokir mohon Hubungi CS kami";
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    cout << "Maaf Saldo anda tidak cukup ";
                                    cout << "Apakah anda ingin melakukan transaksi lainnya : \n (ketik 1 untuk IYA / ketik 0 untuk TIDAK)";
                                    cin >> pilih;
                                    if (pilih == 0)
                                    {
                                        ulang = 3;
                                    }
                                }
                            default:
                                ulang = 3;
                                pilih = 1;
                                break;
                            }
                        }
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
    cout << "program selesai";
    return 0;
}
