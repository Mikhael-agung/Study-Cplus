#include "../model/modelMember.h"
#include <string>
#include <iostream>

using namespace std;

void vAddMember()
{
    string inpNama, inpNoTelp, inpEmail, inpPassword;
    cout << "Masukan nama: ";
    cin >> inpNama;
    cout << "Masukan No telp:  ";
    cin >> inpNoTelp;
    cout << "Masukan Email: ";
    cin >> inpEmail;
    cout << "Masukan Password: ";
    cin >> inpPassword;
    mAddMember(inpNama, inpNoTelp, inpEmail, inpPassword);
}

void vViewMembers()
{
    mViewMember();
}

void vSearchMember()
{
    string inpNotelp;
    cout << "Masukan Nomor Telpon: ";
    cin >> inpNotelp;
    int index = mSearchMember(inpNotelp);
    if(index != -1){
        cout << "Data member" << endl;
        cout << "===============================================================\n";
        cout << "Nama\t\tNo.Telp\t\tEmail\t\tPassword" << endl;
        cout << "===============================================================\n";
        cout << namaMember[index] <<"\t\t"<< noTelp[index] << "\t\t"<<email[index] << "\t\t" << password[index] << endl;
        cout << "===============================================================\n";
    }else{
        cout << "No.Telp tidak di temukan";
    }
}

void vUpdatePassword(){
    string inpnoTelp, inpPass;
    cout << "Masukan Nomor Telepon: ";
    cin >> inpnoTelp;
    cout << "Masukan Password: ";
    cin >> inpPass;
    mUpdatePassword(inpnoTelp, inpPass);
}