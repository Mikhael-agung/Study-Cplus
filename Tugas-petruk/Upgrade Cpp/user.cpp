#include "user.h"
#include <iostream>
#include <fstream>

using namespace std;

User::User(const string &username, const string &password)
    : username(username), password(password)
{
}

bool User::login(const string &inputUsername, const string &inputPassword) const
{
    ifstream file("userdata.txt");
    string storedUsername, storedPassword;

    while (file >> storedUsername >> storedPassword)
    {
        if (storedUsername == inputUsername && storedPassword == inputPassword)
        {
            cout << "Login berhasil!" << endl;
            return true; // Login berhasil
        }
    }

    cout << "Login gagal. Periksa kembali username dan password." << endl;
    return false; // Login gagal
}

bool User::isUserRegistered(const string &inputUsername)
{
    ifstream file("userdata.txt");
    string storedUsername, storedPassword;

    while (file >> storedUsername >> storedPassword)
    { // Membaca username dan password secara terpisah
        if (storedUsername == inputUsername)
        {
            return true; // Pengguna sudah terdaftar
        }
    }

    return false; // Pengguna belum terdaftar
}

void User::saveData() const
{
    ofstream file("userdata.txt", ios::app);
    if (file.is_open())
    {
        file << username << " " << password << endl; // Menyimpan data pengguna yang sesuai
        file.close();
        cout << "Registrasi berhasil. Silakan login." << endl;
    }
    else
    {
        cout << "Gagal menyimpan data." << endl;
    }
}
