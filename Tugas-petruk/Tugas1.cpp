#include <iostream>
using namespace std;

int main()
{
    // inisialiasai dan deklasrasi variable
    int kode_kartu, pin;
    int nomor_kartu = 18102007;
    int password = 100000;
    int ulang = 0;


    // user memasukan pin
    cout << "program Atm\n";
    while (ulang < 3)
    {
        cout << "masukan Nomor kartru anda : ";
        cin >> kode_kartu;
        cout << "masukan Kata sandi anda : ";
        cin >> pin;

        if ((kode_kartu == nomor_kartu) && (pin == password))
        {
            cout << "masuk ke menu utama\n";
            cout << "1. Transfer";
            cout << "2. Exit";
        }
        else
        {
            cout << "masukan Pin dengan benar";
            ulang = ulang + 1;
            if (ulang  == 3){
                cout << "Kartu anda terblokir";
            }
        }
    }

    cout << "Program berhenti";
    return 0;
}