#include <iostream>
#include <string>
#include <thread>

using namespace std;

void printTriangle()
{
    std::string z = "";
    for (int i = 0; i < 10; i++)
    {
        for (int x = 0; x <= i; x++)
        {
            z += '*';
        }
        z += '\n';
    }
    std::cout << z << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void printChessboard()
{
    std::string s = "";
    int panjang = 10;
    int lebar = 5;

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
                    s += '#';
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
                    s += '#';
                }
            }
        }
        s += '\n';
    }

    std::cout << s << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void printDiamond()
{
    std::string d = "";
    int t = 10;

    for (int a = 0; a < t; a++)
    {
        for (int s = 0; s <= a; s++)
        {
            d += '*';
        }
        d += '\n';
    }

    for (int g = 1; g <= t; g++)
    {
        for (int v = t; v > g; v--)
        {
            d += '*';
        }
        for (int Q = 0; Q < g; Q++)
        {
            d += ' ';
        }

        d += '\n';
    }

    std::cout << d << endl;
}

void hasilBelajarSatu()
{
    // ? Menginisialisasi generator angka acak dengan waktu saat ini
    // std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // * Menghasilkan angka acak antara 1 hingga 3 (mewakili waktu memasak antara 1 hingga 3 menit)
    double cookTime = (std::rand() % 300) / 100.0; // Menghasilkan waktu dalam desimal hingga dua tempat desimal

    // * Menampilkan waktu memasak yang dihasilkan
    std::cout << "Waktu memasak: " << cookTime << " menit" << std::endl;

    //! Memeriksa apakah waktu memasak kurang dari 1,5 menit
    if (cookTime < 1.5)
    {
        std::cout << "Mie belum matang." << std::endl;
    }
    else if (cookTime == 1.5)
    {
        std::cout << "Mie sudah matang." << std::endl;
    }
    else
    {
        std::cout << "Mie terlalu matang." << std::endl << endl;
    }
    std::cout << endl << endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

void printPiramid()
{
    // ! piramida FOR
    int tinggi_07651;
    std::cout << "masukan nilai tinggi_07651 segitiga : " << endl;
    std::cin >> tinggi_07651;

    for (int i = 1; i <= tinggi_07651; i++){
        for (int a = 1; a <= tinggi_07651 - i; a++){
            std::cout << " ";
        }
        for (int d = 1; d <= 2 * i -1; d++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(3000));
}

int main()
{

    float A, T, L;
    cout << "Masukan alas_07651 Segitiga: ";
    cin >> A;
    cout << "Masukan tinggi_07651 Segitiga: ";
    cin >> T;
    L = 0.5 * A * T;
    cout << "Luas Segitiga Adalah: ";
    cout << L << endl
         << endl
         << endl;

    thread t1(printTriangle);
    thread t2(printChessboard);
    thread t3(printDiamond);
    thread t4(hasilBelajarSatu);
    thread t5(printPiramid);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();

    return 0;
}
