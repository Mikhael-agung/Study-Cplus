#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Input
    int panjang = 5;
    int lebar = 5;
    char huruf = 'A';

    // Output
    string s = "";
    for (int i = 1; i <= lebar; i++)
    {
        if (i % 2 == 0)
        {
            for (int x = 1; x <= panjang; x++)
            {
                if (x % 2 == 0)
                {
                    s += ' ';
                }
                else
                {
                    s += huruf;
                    huruf++;
                }
            }
        }
        else
        {
            for (int z = 1; z <= panjang; z++)
            {
                if (z % 2 == 1)
                {
                    s += ' ';
                }
                else
                {
                    s += huruf;
                    huruf++;
                }
            }
        }
        s += '\n';
    }

    // Print
    cout << s;

    return 0;
}
