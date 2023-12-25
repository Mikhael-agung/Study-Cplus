#include <iostream>
#include "model/modelMember.h"
using namespace std;

int main()
{
    // testing model member
    mAddMember("Bujang1", "12345648760", "bujed5@gmail.com", "1234");
    mAddMember("Bujang2", "1234560", "bujed5@gmail.com", "12345");
    mAddMember("Bujang3", "12345648764", "bujed7@gmail.com", "123458");

    mUpdatePassword("12345648764", "123456");
    nViewMember();

    // cout << "Indeks User : "<< mSearchMember("1234560") << endl;

    return 0;
}