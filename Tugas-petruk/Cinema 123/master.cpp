#include <iostream>
#include "view/viewMember.h"
#include "view/viewStudio.h"
#include "view/viewFilm.h"
#include "view/viewJadwal.h"
using namespace std;

void static_value()
{
    // testing static value member database
    mAddMember("Bogeng", "085232978270", "bujed@gmail.com", "123456");
    mAddMember("Bajog", "0897270", "bujed1@gmail.com", "456789");
    mAddMember("coeg", "085232270", "bujed2@gmail.com", "123789");

    // testing static value studio database
    mAddStudio("Studio 1", 100);
    mAddStudio("Studio 2", 100);
    // mAddStudio("Studio 3", 100);

    // testing static value Film database
    mAddFilm("Avenger: EndGame", "3 jam", "Action");
    mAddFilm("SpiderMan: Far From Home", "2 jam", "Action");
    mAddFilm("Halo 3", "4 jam", "Action");

    // testing static Jadwal Database
    mAddJadwal("10.00", "12-12-2024", "Studio 1", "Avenger: EndGame", 40000);
    mAddJadwal("10.00", "12-12-2024", "Studio 1", "SpiderMan: Far From Home", 40000);
    
}
void confirm(int &pilih)
{
    char konfirmasi;
    cout << "kembali ke menu utama? (Y/N): ";
    cin >> konfirmasi;
    if (konfirmasi == 'y' || konfirmasi == 'Y')
    {
        pilih = 0;
    }

    if (konfirmasi == 'n' || konfirmasi == 'N')
    {
        pilih = 9;
    }
}

void MenuAdmin()
{
    int pilih;
    do
    {
        cout << "Menu Admin\n";
        cout << "1. Tambah Film\n";
        cout << "2. Lihat Film\n";
        cout << "3. Cari Film\n";
        cout << "4. Tambah User\n";
        cout << "5. Lihat User\n";
        cout << "6. Tambah Jadwal\n";
        cout << "7. Lihat Jadwal\n";
        cout << "8. Cari Jadwal\n";
        cout << "9. Exit\n";
        cout << "Masukan Pilihan : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vAddFilm();
            break;
        case 2:
            vViewFilms();
            break;
        case 3:
            vSearchFilms();
            break;
        case 4:
            vAddMember();
            break;
        case 5:
            vViewMembers();
            break;  
        default:
            pilih = 9;
            break;
        }

        if(pilih != 9){
            confirm(pilih);
        }
        
    } while (pilih != 9);
    cout << "THX\n";
}

void MenuUser()
{   
    int pilih;
    do
    {
        cout << "Menu User\n";
        cout << "1. Tambah Film\n";
        cout << "2. Lihat Film\n";
        cout << "3. Cari Film\n";
        cout << "4. Tambah User\n";
        cout << "5. Lihat User\n";
        cout << "6. Tambah Jadwal\n";
        cout << "7. Lihat Jadwal\n";
        cout << "8. Cari Jadwal\n";
        cout << "9. Exit\n";
        cout << "Masukan Pilihan : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vAddFilm();
            break;
        case 2:
            vViewFilms();
            break;
        case 3:
            vSearchFilms();
            break;
        case 4:
            vAddMember();
            break;
        case 5:
            vViewMembers();
            break;
        case 9:
            cout << "THX\n";
            return;  // Keluar dari loop
        default:
            break;
        }
    } while (true);
}

void LoginAuthentication()
{
    string email, password;
    cout << "Masukan email anda :";
    cin >> email;
    cout << "Masukan Password anda : ";
    cin >> password;

    int index = mUserLogin(email, password);
    if (email == "admin" && password == "admin")
    {
        MenuAdmin();
    }
    else if (index != -1)
    {
        MenuUser();
    }
    else
    {
        cout << "email atau password yang anda masukan salah\n";
    }
}

int main()
{

    static_value();
    LoginAuthentication();
    return 0;
}