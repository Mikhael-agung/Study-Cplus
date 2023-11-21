#include <iostream>
using namespace std;

int main()
{
    int pilih, nominal;
    string default_account = "admin", login;
    string konfirmasi;
    string default_pin = "admin", pin;
    int poin = 1000000, jumlahTiket, TopUP = 100000;
    // int tiketing = 0;
    int tiket1 = 200000;
    // int ;
    // int ;
    int menuUtama;
    int ulang = 0;

    cout << "AWC Theater " << endl;
    cout << pilih << endl;
    while (ulang < 3)
    {
        cout << "Silakan Login dengan akun anda : ";
        cin >> login;
        cout << "Masukan Pin anda : ";
        cin >> pin;

        if (login == default_account && pin == default_pin)
        {
            while (pilih != 0)
            {
                /* code */
                cout << "Sebelum Melakukan Pembelian tiket Theater, Pastikan Poin anda cukup\n";
                cout << "1. Check Poin\n";
                cout << "2. Top UP POIN\n";
                cout << "3. Pembelian tiket\n";
                cin >> pilih;
                menuUtama = 1;
                switch (pilih)
                {
                case 1:
                    // Menu Check Poin
                    cout << "Menu Check Poin\n";
                    cout << "Sisa Poin anda saat ini " << poin << endl;
                    cout << "apakah anda ingin Kembali Ke menu Utama => \n (Silakan Ketika YA Atau tidak)";
                    cin >> konfirmasi;
                    if (konfirmasi == "YA" || konfirmasi == "ya")
                    {
                        ulang = 3;
                    }
                    else
                    {
                        ulang = 3;
                        pilih = 0;
                    }
                    break;
                    // Menu Check Poin
                case 2:
                    // menu top up
                    cout << "Masukan jumlah Poin yang ingin anda top Up (1p = 1Rp)\n";
                    cout << "Minimal TopUP 100RB => ";
                    cin >> nominal;
                    if (TopUP <= nominal)
                    {
                        cout << "Jumlah Poin yang anda TopUp adalah " << nominal << endl;
                        poin = poin + nominal;
                        cout << "Jumlah Poin anda sekarang Menjadi " << poin << endl;
                        cout << "Apakah anda ingin kembali ke menu utama (Ketik Ya dan Tidak)";
                        cin >> konfirmasi;
                        if (konfirmasi == "YA" || konfirmasi == "ya")
                        {
                            ulang = 3;
                        }
                        else
                        {
                            pilih = 0;
                            ulang = 3;
                        }
                    }
                    else
                    {
                        cout << "Maaf jumlah Minimum untuk TopUP adalah 100RB\n";
                        cout << "apakah Anda ingin Kembali ke Menu Utama => ";
                        cin >> konfirmasi;
                        if (konfirmasi == "YA" || konfirmasi == "ya")
                        {
                            ulang = 3;
                        }
                        else
                        {
                            ulang = 3;
                            pilih = 0;
                        }
                    }
                    break;
                    // menu TopUP
                case 3:
                    // pemilihan Film
                    while (menuUtama != 0)
                    {
                        cout << endl;
                        cout << "|============================================================|\n";
                        cout << "|                            Pengumuman                      |\n";
                        cout << "|     Pemesanan Tiket Hanya dapat di lakukan 1 kali PerAkun  |\n";
                        cout << "|       di setiap acara Show theater yang akan berlangsung   |\n";
                        cout << "|============================================================|\n";
                        cout << "|============================================================|\n";
                        cout << "|                  Nama Acara                 |     waktu    |\n";
                        cout << "|1. Ramune No Nomikata (cara meminum Ramune)  | Kamis 19.00  |\n";
                        cout << "|2. Tunas Di Balik Seragam                    | Jumat 19.00  |\n";
                        cout << "|3. Gadis Gadis Remaja                        | Sabtu 19.00  |\n";
                        cout << "|0. kembali                                                  |\n";
                        cin >> pilih;
                        switch (pilih)
                        {
                        case 1:
                            cout << "berapa tiket yang ingin anda ambil : ";
                            cin >> jumlahTiket;

                            if (jumlahTiket == 1)
                            {
                                cout << "Harga tiket untuk acara Show Ramune No Nomikata adalah 200RB Poin\n";
                                cout << "Apakah yang ada pilih sudah benar\n (Klik Y JIka YA dan N Jika tidak)" << endl;
                                cin >> konfirmasi;
                                if (konfirmasi == "Y" || konfirmasi == "y")
                                {
                                    poin = poin - tiket1;
                                    cout << "transaksi Berhasil";
                                    ulang = 3;
                                    menuUtama = 1;
                                }
                                else
                                {
                                    ulang = 3;
                                    pilih = 0;
                                    menuUtama = 1;
                                }
                            }
                            else
                            {
                                cout << "maaf Jumlah tiket yang dapat di pesan hanya 1 tiket per Akun\n";
                                ulang = 3;
                                pilih = 0;
                                menuUtama = 1;
                            }
                            break;
                        case 2:
                            cout << "Masukan Jumlah tiket yang ingin anda : ";
                            cin >> jumlahTiket;

                            if (jumlahTiket == 1)
                            {
                            }
                            else
                            {
                            }
                            break;
                        case 3:
                            break;

                        case 0:
                            menuUtama = 0;
                            pilih = 1;
                            break;
                        default:
                            pilih = 0;
                            ulang = 3;
                            break;
                        }
                    }
                    break;
                default:
                    cout << "maaf Pilihan  Yang anda masukan tidak ada";
                    cout << "apakah anda ingin kembali ke menu Utama\n (ketik YA Atau Tidak)";
                    cin >> konfirmasi;
                    if (konfirmasi == "YA" || konfirmasi == "ya")
                    {
                        ulang = 3;
                        pilih = 1;
                    }
                    else
                    {
                        pilih = 0;
                        ulang = 3;
                    }
                    break;
                }
            }
        }
        else
        {
            cout << "Akun atau Password yang anda masukan salah atau tidak dapat di temukan, mohon masukan dengan benar\n";
            cout << "apakah anda masih ingin menginputkan Akun atau password dengan Benar\n (Ketik YA atau Tidak)" << endl;
            cin >> konfirmasi;
            if (konfirmasi == "YA" || konfirmasi == "ya")
            {
            }
            else
            {
                pilih = 0;
                ulang = 3;
            }
        }
    }
    cout << "terima kasih sudah mengunjungi AWC Theater";
    return 0;
}