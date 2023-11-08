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

    for(int i = angka; i >= 1; i--) {
        for(int s = i; s >= 1; s--) {
            cout << s;
            if(s != 1) {
                cout << " * ";
            }
        }
        cout << " = ";

        int hasil = 1;
        for(int a = i; a >= 1; a--) {
            hasil *= a;
        }
        cout << hasil << endl;
    }
    return 0;
}
