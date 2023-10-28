#include <iostream>
using namespace std;

void arimatika_07651()
{
    int start_07651, loops_07651;
    int oper_07651, result;

    cout << "masukan Angka yang ingin di gunakan: \n";
    cin >> start_07651;
    cout << "masukan Jumlah pengualangan hasil: ";
    cin >> loops_07651;

    cout << "Baris aritmatika: ";
    for (int i = 1; i <= loops_07651; i++)
    {
        if (i % 3 == 1)
        {
            oper_07651 = i;
            result = start_07651 + oper_07651;
        }
        else if (i % 3 == 2)
        {
            oper_07651 = i;
            result = start_07651 * oper_07651;
        }
        else
        {
            oper_07651 = -i;
            result = start_07651 + oper_07651;
        }
        cout << result << " ";
        start_07651 = result;
    }
}

int main()
{
    arimatika_07651();
    return 0;
}
