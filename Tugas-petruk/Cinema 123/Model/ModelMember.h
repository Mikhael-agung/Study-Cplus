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

void nViewMember()
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
