#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User
{
public:
    User(const string &username, const string &password);
    bool login(const string &username, const string &password) const;
    static bool isUserRegistered(const string &username);
    void saveData() const;

    private:
    string username;
    string password;
};

#endif