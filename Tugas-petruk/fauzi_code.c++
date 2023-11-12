#include <iostream>
using namespace std;
int main()
{
    int default_noREK = 123456;
    int default_noREKA = 111;
    int default_noREKB = 222;
    int default_pin = 24;
    int pin = 0;
    int ulang = 0;
    int noREK = 0;
    int saldo = 10000;
    int pilih = 100;
    int nominal = 0;
    int konfirmasi = 0;
    int transfer = 0;

    cout << "ATM FAUZI \n";
    cout << "Masukkan No Rekening Anda: ";
    cin >> noREK;
    cout << "Masukkan Pin Anda: ";
    cin >> pin;
    if (noREK == default_noREK && pin == default_pin)
    {
        while (pilih != 0)
        {
            cout << "Pilih Transaksi Yang Anda Ingin Lakukan \n";
            cout << "1. Transfer \n";
            cout << "2. Tarik Tunai \n";
            cout << "3. Exit \n";
            cout << " Masukkan Pilihan Anda: ";
            cin >> pilih;
        }
    }
    else
    {
        cout << "Pin salah";
    }
    return 0;
}