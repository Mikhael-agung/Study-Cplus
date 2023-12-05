#include "user.h"
#include <iostream>
#include <fstream>

using namespace std;

User::User(const string& username, const string& password)
    : username(username), password(password) {}

bool User::login(const string& inputUsername, const string& inputPassword) const {
    if (inputUsername == username && inputPassword == password) {
        cout << "Login berhasil!" << endl;
        return true;
    } else {
        cout << "Login gagal. Periksa kembali username dan password." << endl;
        return false;
    }
}

bool User::isUserRegistered(const string& inputUsername) {
    ifstream file("userdata.txt");
    string storedUsername, storedPassword;

    while (file >> storedUsername >> storedPassword) {
        if (storedUsername == inputUsername) {
            return true; // Pengguna sudah terdaftar
        }
    }

    return false; // Pengguna belum terdaftar
}

void User::saveData() const {
    ofstream file("userdata.txt", ios::app);
    if (file.is_open()) {
        file << username << " " << password << endl;
        file.close();
        cout << "Registrasi berhasil. Silakan login." << endl;
    } else {
        cout << "Gagal menyimpan data." << endl;
    }
}
