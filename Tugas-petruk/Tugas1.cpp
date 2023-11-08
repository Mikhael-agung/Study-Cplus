#include <iostream>
using namespace std;

int main()
{
    cout << "program Atm ";

    // inilisdeklasrasi variable
    int kode_kartu, pin;
    int nomor_kartu = 18102007;
    int password = 100000;
    int ulang = 0;
    int salah = 0;

    while (ulang == 0)
    {
        cout << "masukan Nomor kartru anda : ";
        cin >> kode_kartu;
        cout << "masukan Kata sandi anda : ";
        cin >> pin;

        if ((kode_kartu == nomor_kartu) && (pin == password)) {
            cout << "masuk ke menu utama";
        }
        else{
            salah = salah + 1;
        } 

        if (salah == 3 ){
            cout << "Kartu anda terblokir";
        }
    };
    return 0;
}