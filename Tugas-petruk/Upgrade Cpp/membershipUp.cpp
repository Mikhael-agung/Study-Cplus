#include <iostream>
#include "user.h"
using namespace std;


int main()
{
string username;
string password;
// int ulang;


    // Registrasi
    cout << "Registrasi" << endl;
    cout << "Username: ";
    cin >> username;

    if (!User::isUserRegistered(username)) {
        cout << "Password: ";
        cin >> password;

        User newUser(username, password);
        newUser.saveData();
    } else {
        cout << "Username sudah terdaftar. Silakan login." << endl;
    }

    // Login
    cout << "\nLogin" << endl;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    User loginUser(username, password);
    loginUser.login(username, password);
    
}