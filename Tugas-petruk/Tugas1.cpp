#include <iostream>
using namespace std;

int main()
{
    // inisialiasai dan deklasrasi variable
    int pilih, defaultNoRekA = 222222, defaultNoRekB = 333333, nomor_kartu = 123456,
               password = 10, input_pin = 0, input_rek = 0;
    int inputNoRek = 0, saldo = 1000000, mainMenu = 0;
    int withDraw, inpoSaldo, pilihRekening;
    int konfirmasi, pin_transaction;
    int pecahan100 = 100000, pecahan50 = 50000;
    int ulang = 0, menuUtama = 0, nominal = 0;
    // int pilih;

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
                                            cout << "Transfer yang anda lakukan berhasil\n";
                                            cout << "sisa saldo anda adalah " << saldo << endl;
                                            // jika user ingin melakukan transaksi lagi.
                                            cout << "apakah anda ingin melakukan transaksi lagi\n (jika iya ketik 1 dan tidak ketik 0)" << endl;
                                            cin >> pilih;
                                            if (pilih != 0)
                                            {
                                                pilih = 0;
                                                ulang = 3;
                                            }
                                            else
                                            {
                                                cout << "terima kasih sudah melakukan transaksi\n";
                                                mainMenu = 3;
                                                menuUtama = 1;
                                                ulang = 3;
                                            }
                                        }
                                        else
                                        {
                                            cout << "masukan Password dengan benar\n";
                                            mainMenu++;
                                            if (mainMenu == 2)
                                            {
                                                cout << "Ini Kesempatan Terakhir!!!\n";
                                            }
                                            if (mainMenu == 3)
                                            {
                                                cout << "kartu anda terblokir tolong Hubungi CS bank\n";
                                                menuUtama = 1;
                                                pilih = 0;
                                                ulang = 3;
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
                                        mainMenu = 3;
                                        menuUtama = 1;
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
                                    menuUtama = 3;
                                }
                            }
                        }
                        else
                        {
                            cout << "Maaf Nomor rekening yang anda masukan tidak terdaftar, Mohon masukan dengan benar \n";
                            cout << "apakah anda ingin menginputkanya kembali\n (klik 1 Jika YA dan 0 Jika Tidak)";
                            cin >> pilih;
                            if (pilih != 0)
                            {
                                pilih = 0;
                                ulang = 3;
                            }
                            else
                            {
                                mainMenu = 3;
                                menuUtama = 1;
                                ulang = 3;
                            }
                        }
                    }
                    break;
                case 2:
                    // tarik tunai
                    cout << "Anda masuk ke menu tarik Tunai\n";
                    cout << "Menu Tarik Tunai\n";
                    cout << "Silakan Pilih Nominal Yang ingin anda ambil \n";
                    cout << "1. Pecahan 100RB\n";
                    cout << "2. Pecahan 50RB\n";
                    cin >> withDraw;
                    switch (withDraw)
                    {
                    case 1:
                        cout << "masukan Nominal : ";
                        cin >> nominal;
                        if (saldo >= nominal)
                        {
                            // konfirmasi Transaksi
                            withDraw = 0;
                            while (withDraw < 3)
                            {
                                cout << "masukan Pin anda : ";
                                cin >> pin_transaction;
                                if (pin_transaction == input_pin)
                                {
                                    if (nominal % pecahan100 == 0)
                                    {
                                        pecahan100 = nominal / pecahan100;
                                        saldo = saldo - nominal;
                                        cout << "Sisa saldo anda adalah : " << saldo << endl;
                                        cout << "Apakah anda ingin melakukan Transaksi Lain\n (Klik 1 Jika YA dan 0 Jika Tidak)\n";
                                        cin >> pilih;
                                        if (pilih != 0)
                                        {
                                            pilih = 1;
                                        }
                                        else
                                        {
                                            menuUtama = 1;
                                            withDraw = 3;
                                            ulang = 3;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Maaf nominal yang anda masukan kurang dari 100RB\n ";
                                        cout << "Apakah anda ingin melakukan Transaksi Lain\n (Klik 1 Jika YA dan 0 Jika Tidak)";
                                        cin >> konfirmasi;
                                        if (konfirmasi != 0)
                                        {
                                            withDraw = 3;
                                            menuUtama = 0;
                                        }
                                        else
                                        {
                                            withDraw = 3;
                                            pilih = 0;
                                            ulang = 3;
                                        }
                                    }
                                }
                                else
                                {
                                    cout << "Maaf Pin anda salah, Mohon masukan dengan benar\n";
                                    withDraw++;
                                    if (withDraw == 2)
                                    {
                                        cout << "ini percobaan terakhir\n ";
                                    }
                                    if (withDraw == 3)
                                    {
                                        cout << "maaf Kartu anda terblokir\n";
                                        menuUtama = 1;
                                        pilih = 0;
                                        ulang = 3;
                                    }
                                }
                            }
                        }
                        else
                        {
                            cout << "Maaf saldo anda kurang" << endl;
                            cout << "apakah anda ingi melakukan transaksi lain\n (Klik 1 jika Ya Dan 0 Jika Tidak)";
                            cin >> pilih;
                            if (pilih != 0)
                            {
                                ulang = 3;
                            }
                            else
                            {
                                // cout << "out";
                                mainMenu = 3;
                                menuUtama = 1;
                                ulang = 3;
                            }
                        }
                        break;
                    case 2:
                        cout << "Masukan Nominal Yang ingin di ambil : ";
                        cin >> nominal;

                        if (saldo >= nominal)
                        {
                            // konfirmasi Transaksi
                            withDraw = 0;
                            while (withDraw < 3)
                            {
                                cout << "Masukan PIN transaksi anda : ";
                                cin >> pin_transaction;
                                if (pin_transaction == input_pin)
                                {
                                    if (nominal % pecahan50 == 0)
                                    {
                                        pecahan50 = nominal / pecahan50;
                                        saldo = saldo - nominal;
                                        cout << "Sisa saldo yang ada di rekening anda" << saldo << endl;
                                        cout << "apakah anda ingin melakukan transaksi lain? \n (Klik 1 Jika YA dan 0 Jika Tidak)";
                                        cin >> pilih;
                                        if (pilih != 0)
                                        {
                                            withDraw = 3;
                                            ulang = 3;
                                        }
                                        else
                                        {
                                            menuUtama = 1;
                                            withDraw = 3;
                                            ulang = 3;
                                        }
                                    }
                                    else
                                    {
                                        cout << "Maaf Nominal yang anda masukan kurang dari 50RB atau tidak sama dengan kelipatan 50RB\n";
                                        cout << "apakah Anda ingin melakukan transaksi yang lain\n (Klik 1 Jika Ya dan 0 Jika tidak)";
                                        cin >> konfirmasi;
                                        if (konfirmasi != 0)
                                        {
                                            withDraw = 3;
                                            menuUtama = 0;
                                        }
                                        else
                                        {
                                            menuUtama = 3;
                                            pilih = 0;
                                            ulang = 3;
                                        }
                                    }
                                }
                                else
                                {
                                    cout << "Pin yang anda masukan salah \n";
                                    withDraw++;
                                    if (withDraw == 2)
                                    {
                                        cout << "ini adalah kesempatan terakhir MOHON DI PERHATIKAN\n";
                                    }
                                    if (withDraw == 3)
                                    {
                                        cout << "MAAF KARTU ANDA TERBLOKIR, SEGERA HUBUNGI CS KAMI\n";
                                        pilih = 0;
                                        menuUtama = 1;
                                        ulang = 3;
                                    }
                                }
                            }
                        }
                        else
                        {
                            cout << "Maaf saldo yang anda miliki Tidak Cukup\n";
                            cout << "Apakah anda ingin melakukan transaksi yang lain?? \n (Klik 1 Jika YA dan 0 Jika tidak)";
                            cin >> pilih;
                            if (pilih != 0)
                            {
                                ulang = 3;
                            }
                            else
                            {
                                cout << "TESTTTT";
                                mainMenu = 3;
                                menuUtama = 1;
                                ulang = 3;
                            }
                        }
                        break;
                    default:
                        cout << "pilihan tidak ada\n";
                        pilih = 1;
                        break;
                    }
                    break;
                    // bagian Tarik Tunai

                case 3:
                    // info saldo
                    cout << "masuk ke menu Info Saldo\n";
                    // pengecekan password
                    inpoSaldo = 0;
                    while (inpoSaldo < 3)
                    {

                        cout << "masukan PIN anda : ";
                        cin >> pin_transaction;
                        if (pin_transaction == input_pin)
                        {
                            cout << "Saldo yang ada di Rekening anda tersisa " << saldo << endl;
                            cout << "Apakah anda ingin melakukan Transaksi lain\n (Klik 1 jika YA dan 0 )";
                            cin >> pilih;
                            if (pilih != 0)
                            {
                                pilih = 0;
                                ulang = 3;
                            }
                            else
                            {
                                ulang = 3;
                                inpoSaldo = 3;
                            }
                        }
                        else
                        {
                            inpoSaldo++;
                            cout << "anda sudah memasukan PIN yang salah sebanyak " << inpoSaldo << endl;
                            if (inpoSaldo == 2)
                            {
                                cout << "ini kesempatan terakhir\n ";
                            }
                            if (inpoSaldo == 3)
                            {
                                cout << "Kartu anda terblokir\n";
                                menuUtama = 1;
                                pilih = 0;
                                ulang = 3;
                            }
                        }
                    }
                    break;

                case 4:
                    // setor Tunai
                    cout << "Masuk ke menu setor tunai\n ";
                    cout << "masukan lembar Pecahan uang 50/100 : ";
                    cin >> nominal;
                    // proses Identifikasi Nominal
                    if (nominal % pecahan100 == 0 || nominal % pecahan50 == 0)
                    {
                        cout << "jumlah Uang yang anda setorkan " << nominal << endl;
                        cout << "setor ke Rekening : " << endl;
                        cout << "1.Rekening anda\n";
                        cout << "2.Rekening Lain\n";
                        cout << "0.klik angka berapa pun untuk membatalkan Transaksi\n";
                        cin >> pilihRekening;
                        menuUtama = 0;
                        switch (pilihRekening)
                        {
                        case 1:
                            // Rekening Sendiri
                            mainMenu = 0;
                            while (mainMenu < 3)
                            {
                                // konfirmasi transaksi
                                cout << "Masukan PIN transaksi anda";
                                cin >> pin_transaction;
                                if (pin_transaction == input_pin)
                                {
                                    saldo = saldo + nominal;
                                    cout << "Transaksi BERHASIL";
                                    cout << "Saldo yang ada di rekening anda sekarang " << saldo << endl;
                                    cout << "apakah anda ingin melakukan transaksi Lagi\n (KLik 1 Jika YA dan 0 jika Tidak)";
                                    cin >> konfirmasi;
                                    if (konfirmasi != 0)
                                    {
                                        mainMenu = 3;
                                        ulang = 3;
                                    }
                                    else
                                    {
                                        mainMenu = 3;
                                        ulang = 3;
                                        menuUtama = 1;
                                    }
                                }
                                else
                                {
                                    cout << "Maaf anda sudah memasukan PIN yang salah sebanyak " << mainMenu << endl;
                                    cout << "anda di beri kesempatan sebanyak 3 kali";
                                    mainMenu++;
                                    if (pin_transaction == 2)
                                    {
                                        cout << "ini kesempatan Terakhir";
                                    }

                                    if (pin_transaction == 3)
                                    {
                                        cout << "Maaf Kartu anda terblokir karena anda sudah memasukan PIN yang salah sebanyak " << mainMenu;
                                        menuUtama = 1;
                                        ulang = 3;
                                        pilih = 0;
                                    }
                                }
                            }
                            break;

                        case 2:
                            // Rekening Lain
                            cout << "masukan Nomor Rekening yang anda Tuju : ";
                            cin >> inputNoRek;
                            if (inputNoRek == defaultNoRekA || inputNoRek == defaultNoRekB)
                            {
                                // konfirmasi Transaksi
                                mainMenu = 0;
                                while (mainMenu < 3)
                                {
                                    cout << "masukan Pin anda :";
                                    cin >> pin_transaction;
                                    if (pin_transaction == input_pin)
                                    {
                                        cout << "Jumlah Uang yang anda setorkan adalah " << nominal << endl;
                                        cout << "No Rekening yang anda Tuju adalah " << inputNoRek << endl;
                                        cout << "Apakah yang Anda inputkan Sudah benar \n (Klik 1 Jika Benar dan 0 Jika tidak)";
                                        cin >> konfirmasi;
                                        if (konfirmasi != 0)
                                        {
                                            cout << "LANJUT\n";
                                            mainMenu = 3;
                                            ulang = 3;
                                            menuUtama = 1;
                                        }
                                        else
                                        {
                                            pilih = 0;
                                            ulang = 3;
                                            mainMenu = 3;
                                        }
                                    }
                                    else
                                    {
                                        mainMenu++;
                                        cout << "Anda sudah memasukan PIN yang salah sebanyak " << mainMenu << endl;
                                        cout << "mohon masukan PIN dengan benar, Anda hanya di beri kesempatan 3 kali!!" << endl;
                                        if (mainMenu == 2)
                                        {
                                            cout << "Ini adalah kesempatan yang terakhir" << endl;
                                        }
                                        if (mainMenu == 3)
                                        {
                                            cout << "Maaf kartu anda terblokir, Mohon hubungi CS kami" << endl;
                                            menuUtama = 1;
                                            ulang = 3;
                                            pilih = 0;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                cout << "rekening yang anda masukan tidak dapat di temukan\n";
                                cout << "apakah anda ingin melakukan transaksi yang lain \n (KLik 1 Jika YA dan 0 Jika Tidak)";
                                cin >> konfirmasi;
                                if (konfirmasi != 0)
                                {
                                    menuUtama = 3;
                                    ulang = 3;
                                }
                                else
                                {
                                    mainMenu = 3;
                                    menuUtama = 1;
                                }
                            }
                            break;
                        default:
                            pilih = 0;
                            ulang = 3;
                            break;
                        }
                    }
                    else
                    {
                        cout << "nominal Pecahan Harus 100 atau 50\n";
                        cout << "apakah anda ingin melakukan transaksi Lain\n (Klik 1 Jika YA dan 0 Jika Tidak)";
                        cin >> pilih;
                        if (pilih != 0)
                        {
                            ulang = 3;
                        }
                        else
                        {
                            ulang = 3;
                            menuUtama = 3;
                        }
                    }
                    break;

                    // bagian Setor Tunai
                case 0:
                    ulang = 3;
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
    cout << "program Berhenti";
    return 0;
}
