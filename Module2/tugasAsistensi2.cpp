#include <iostream>

using namespace std;

int main()
{

    int proses_07651, num_07651;

    cout << "masukan angka awal yng akan di proses : ";
    cin >> num_07651;
    cout << "masukan jumlah pemrosesan: \n";
    cin >> proses_07651;

    for (int i = 1; i < proses_07651; i++)
    {
        cout << num_07651 << " ";
        if (i % 2 == 0)
        {
            num_07651 += 2; // jika i genap maka tambah 2
        }
        else
        {
            num_07651 += 3; // jika i genap maka tambah 3
        }
    }

    cout << endl;

    return 0;
}