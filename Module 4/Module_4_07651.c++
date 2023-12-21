#include <iostream>
#include <cctype>
using namespace std;

string modif_07651(string value, bool toLowercase = true, bool toUppercase = true) {
    for (char& c : value) {
        if (isupper(c) && toLowercase) {
            c = tolower(c);
        } else if (islower(c) && toUppercase) {
            c = toupper(c);
        }
    }
    return value;
}

int main() {
    string value_07651;

    cout << "Masukkan string: ";
    getline(cin, value_07651);

    cout << "Hasil: " << modif_07651(value_07651) << endl;

    return 0;
}
