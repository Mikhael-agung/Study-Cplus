#include <iostream>

using namespace std;

int main()
{
    int Mikhael_Agung_07651;
    cout << "Input panjang baris: ";
    cin >> Mikhael_Agung_07651;

    // Memastikan panjang baris adalah bilangan genap
    if (Mikhael_Agung_07651 % 2 == 0)
    {
        Mikhael_Agung_07651 = Mikhael_Agung_07651 - 1;
    }

    cout << "Input adalah bilangan genap, akan dikurangi 1\n";

    // Bagian atas segitiga
    for (int i = 0; i < Mikhael_Agung_07651 - 1; ++i)
    {
        for (int j = 0; j < Mikhael_Agung_07651 - 1 - i; ++j)
            cout << "  ";
        for (int k = 0; k < Mikhael_Agung_07651 - 1 - i + 1; ++k)
            cout << "* ";
        cout << endl;
    }

    // Bagian bawah segitiga
    for (int i = 0; i <= Mikhael_Agung_07651 - 1; ++i)
    {
        for (int j = 0; j < i; ++j)
            cout << "  ";
        for (int k = 0; k < i + 1; ++k)
            cout << "* ";
        cout << endl;
    }
    // 🤯🤯
    return 0;
}
