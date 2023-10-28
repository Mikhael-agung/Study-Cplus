#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "masukan inputan :" << endl;
    cin >> angka;
    for (int i = 1; i <= angka; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j;
            cout << j;
            if (j != i)
            {
                cout << " + ";
            }
        }
        cout << " = " << sum << endl;
    }

    cout << endl; 

    for (int i = angka; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j;
            if (j != 1)
            {
                cout << " * ";
            }
        }
        cout << " = ";

        int kali = 1;
        for (int k = i; k >= 1; k--)
        {
            kali *= k;
        }
        cout << kali << endl;
    }

    return 0;
}
