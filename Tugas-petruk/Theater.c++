#include <iostream>
using namespace std;

int main()
{
    string default_account = "bujed@theater.com", login;
    int default_pin = 123456;
    int poin = 1000000, jumlahTiket, TopUP = 100000;
    // int tiketing = 0;
    int menuUtama;
    int pilih, pin, nominal;
    int ulang = 0;
    string konfirmasi;

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

                menuUtama = 0;
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
                        menuUtama = 3;
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
                    cout << "Masukan jumlah Poin yang ingin anda top Up : ";
                    cin >> nominal;
                    if (TopUP < nominal)
                    {
                        cout << "Lanjut Boss \n";
                    }
                    else
                    {
                        cout << "Maaf jumlah Minimum untuk TopUP adalah 100RB\n";
                        cout << "apakah Anda ingin Kembali ke Menu Utama => ";
                        cin >> konfirmasi;
                        if (konfirmasi == "YA" || konfirmasi == "ya")
                        {
                            ulang = 3;
                            menuUtama = 3;
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
                    while (pilih != 0)
                    {
                        cout << "Silakan memilih Film yang anda mau";
                        cout << "1. The Hunger Games The ballad of songbirds & snakes";
                        cout << "2. The Marvels";
                        cout << "3. The animal Kingdom";
                        cout << "0. kembali";
                        cin >> pilih;

                        // tiketing = 0;
                        switch (pilih)
                        {
                        case 1:
                            cout << "berapa tiket yang ingin anda ambil";
                            cin >> jumlahTiket;
                            break;

                        default:
                            ulang = 3;
                            pilih = 0;
                            cout << "terima kasih sudah mengunjungi AWC Theater";
                            break;
                        }
                    }
                    break;
                default:
                    cout << "maaf Pilihan  Yang anda masukan tidak ada";
                    cout << "apakah anda ingin kembali ke menu Utama\n (ketik YA Atau Tidak)";
                    cin >> konfirmasi;
                    if (konfirmasi != "YA" || konfirmasi == "ya")
                    {
                        menuUtama = 3;
                        ulang = 3;
                        pilih = 0;
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
            cout << "apakah anda masih ingin menginputkan Akun atau password dengan Benar\n (Ketik YA atau Tidak)";
            cin >> konfirmasi;
            if (konfirmasi == "YA" || konfirmasi == "ya")
            {
                menuUtama = 0;
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