#include "../Database/DatabaseMember.h"
#include <string>
#include <iostream>

using namespace std;

void mAddMember(string inpNama, string inpNoTelp, string inpEmail, string inpPassword){
    namaMember[nMember] = inpNama;
    noTelp[nMember] = inpNoTelp;
    email[nMember] = inpEmail;
    password[nMember] = inpPassword;
    nMember++;
}
