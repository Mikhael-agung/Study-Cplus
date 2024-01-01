#include "../Database/DatabaseMember.h"
#include <string>
#include <iostream>

using namespace std;

void mAddMember(string inpNama, string inpNoTelp, string inpEmail, string inpPassword)
{
    namaMember[nMember] = inpNama;
    noTelp[nMember] = inpNoTelp;
    email[nMember] = inpEmail;
    password[nMember] = inpPassword;
    nMember++;
}

void mViewMember()
{
    cout << "Data Member" << endl;
    cout << "Jumlah Member: " << nMember << endl;
    cout << "========================================================" << endl;
    cout << "nama\t\tNo. telp\t\tEmail\t\tPassword" << endl;
    cout << "========================================================" << endl;
    for (int i = 0; i < nMember; i++)
    {
        cout << namaMember[i] << "\t\t" << noTelp[i] << "\t" << email[i] << "\t" << password[i] << endl;
    }

    cout << "========================================================" << endl;
}

int mSearchMember(string inpNoTelp)
{

    for (int i = 0; i < nMember; i++)
    {
        if (noTelp[i] == inpNoTelp){
            return i;
        }
    }    
    return -1;
}

void mUpdatePassword(string inpTelp, string inpPass){
    int index = mSearchMember(inpTelp);
    if(index != -1){
        password[index] = inpPass;
        cout << "Password Berhasil di Perbarui";
    } else {
        cout << "#No.Telp tidak dapat di temukan#\n";
        cout << "#Password gagal di rubah#\n";
    }
}

// void mDeletedMember(string delTelp, string delEmail){
//     int index = mSearchMember(delTelp);
//     // if(){

//     // }
// }

int mUserLogin(string inpEmail, string inpPassword){
    for(int i = 0; i < nMember; i++){
        if(email[i] == inpEmail && password[i] == inpPassword){
        return i;
        }
    }
    return -1;
}
 