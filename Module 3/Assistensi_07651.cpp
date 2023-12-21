#include <iostream>
using namespace std;

int main()
{
    // Membuat variabel untuk menampung jumlah data
    int jumlah_data_07651;
    string nama_depan_07651[10] = {"Asep", "Dimas"};
    string nama_belakang_07651[10] = {"strawberry", "Brokoli"};
    string nama_lengkap_07651[10];

    // Meminta input jumlah data dari user
    cout << "Jumlah Data : ";
    cin >> jumlah_data_07651;

    for (int i = 0; i < jumlah_data_07651; i++)
    {
        nama_lengkap_07651[i] = nama_depan_07651[i] + " " + nama_belakang_07651[i];
    }

    for (int i = 0; i < jumlah_data_07651; i++)
    {
        cout << "Input------------------" << endl;
        cout << "First Name : " << nama_depan_07651[i] << endl;
        cout << "Last Name : " << nama_belakang_07651[i] << endl;
        cout << "-------------------------------" << endl;
    }

    // Mencetak isi array nama lengkap
    for (int i = 0; i < jumlah_data_07651; i++)
    {
        cout << "Array index " << i << endl;
        cout << "First Name : " << nama_depan_07651[i] << endl;
        cout << "Last Name : " << nama_belakang_07651[i] << endl;
        cout << "Full Name : " << nama_lengkap_07651[i] << endl;
        cout << "----------------------------------" << endl;
    }
    return 0;
}
