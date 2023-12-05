#include <iostream>

using namespace std;

int main()
{
    string namaPelanggan, login;
    string namabarang;
    char konfirmasi;
    int totalHarga, poin = 0;
    int harga, jumlahBarang;
    int pilih;

    cout << "Nama : Mikhael Agung Yoga Pratama\n";
    cout << "NPM : 06.2023.1.07651\n";
    cout << "Kelas Malam\n";
    //! TOLONG DI INGAT!!!!
    // * JANGAN LUPA BUAT DESIGN PROGRAM SEMENARIK MUNGKIN
    //* PENAMAAN VARIABLE
    //* Merapikan Variable

    cout << "Program Membership TUGAS UTS\n"; //! tolong di tengah kan
    cout << "Jenis Membership Yang bisa di dapatkan dengan ke tentuan sebagai berikut : \n";
    cout << "'Silver'   = Akumulasi dari Total Pembelanjaan Rp 0 - 10.000.000\n";
    cout << "'GOLD'     = Akumulasi dari Total Pembelanjaan Rp 10.000.000 - 20.000.000\n";
    cout << "'PLATINUM' = Akumulasi dari Total Pembelajaan Rp 20.000.000 - 30.000.000\n";
    cout << "Note : Pelanggan akan mendapatkan 1 poin dengan minimal Transaksi Rp 10.000\n";
    do
    {

        cout << "menu Program Membership\n"; //*jok lali di ganti karo jeneng TOko
        cout << "1. isi nama Pelanggan" << endl;
        cout << "2. Pembelanjaan" << endl;
        cout << "3. informasi Pelanggan" << endl;
        cout << "4. Exit\n";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            cout << "menu Daftar" << endl;
            cout << "Masukan Nama Anda : ";
            cin >> namaPelanggan;

            cout << "Halo " << namaPelanggan << " Selama Datang" << endl;
            break;
        case 2:
            cout << "Menu Pembelajaan" << endl;
            cout << "1. Asus VivoBook Pro" << endl;
            cout << "2. Lenovo Legion 7 slim" << endl;
            cout << "3. Macbook Pro M2" << endl;
            cout << "tuliskan Nama barang yang ingin di ambil\n (Contoh : samsung A51, Ketik Samsung)";
            cin >> namabarang;

            if (namabarang == "Asus" || namabarang == "asus")
            {
                cout << "barang yang anda pilih adalah Asus VivoBook Pro\n";
                cout << "masukan Harga Barang : ";
                cin >> harga;
                cout << "Masukan Jumlah Barang yang ingin anda beli : ";
                cin >> jumlahBarang;
                cout << "barang Yang anda Pilih adalah Asus VivoBook Pro dengan harga Rp" << harga << " dengan Jumlah barang yang anda Beli " << jumlahBarang << endl;
                totalHarga = harga * jumlahBarang;
                cout << "Jadi Total harga yang anda Beli " << totalHarga << endl;
                cout << "apakah semua Detail transaksi ini sudah benar\n (klik Y/t)";
                cin >> konfirmasi;
                if (konfirmasi == 'Y' || konfirmasi == 'y')
                {
                    cout << "transaksi Berhasil\n";
                    poin = totalHarga / 10000;
                    cout << "Poin yang anda dapatkan" << poin << endl;
                    cout << "apakah anda ingin kembali ke menu utama?\n (klik Y/t)";
                    cin >> konfirmasi;
                    if (konfirmasi == 'Y' || konfirmasi == 'y')
                    {
                        pilih = 0;
                    }
                    else
                    {
                        pilih = 4;
                    }
                }
                else
                {
                    pilih = 4;
                }
            }
            else if (namabarang == "lenovo" || namabarang == "Lenovo")
            {
                cout << "barang yang anda pilih adalah Lenovo Legion 7 Slim\n";
                cout << "masukan Harga Barang : ";
                cin >> harga;
                cout << "Masukan Jumlah Barang yang ingin anda beli : ";
                cin >> jumlahBarang;
                cout << "barang Yang anda Pilih adalah Lenovo Legion 7 Slim dengan harga Rp" << harga << " dengan Jumlah barang yang anda Beli " << jumlahBarang << endl;
                totalHarga = harga * jumlahBarang;
                cout << "Jadi Total harga yang anda Beli " << totalHarga << endl;
                cout << "apakah semua Detail transaksi ini sudah benar\n (klik Y/t)";
                cin >> konfirmasi;
                if (konfirmasi == 'Y' || konfirmasi == 'y')
                {
                    cout << "transaksi Berhasil\n";
                    poin = totalHarga / 10000;
                    cout << "Poin yang anda dapatkan" << poin << endl;
                    cout << "apakah anda ingin kembali ke menu utama?\n (klik Y/t)";
                    cin >> konfirmasi;
                    if (konfirmasi == 'Y' || konfirmasi == 'y')
                    {
                        pilih = 0;
                    }
                    else
                    {
                        pilih = 4;
                    }
                }
                else
                {
                    pilih = 4;
                }
            }
            else if (namabarang == "macbook" || namabarang == "Macbook")
            {
                cout << "barang yang anda pilih adalah Macbook Pro M2\n";
                cout << "masukan Harga Barang : ";
                cin >> harga;
                cout << "Masukan Jumlah Barang yang ingin anda beli : ";
                cin >> jumlahBarang;
                cout << "barang Yang anda Pilih adalah Macbook Pro M2 dengan harga Rp" << harga << " dengan Jumlah barang yang anda Beli " << jumlahBarang << endl;
                totalHarga = harga * jumlahBarang;
                cout << "Jadi Total harga yang anda Beli " << totalHarga << endl;
                cout << "apakah semua Detail transaksi ini sudah benar\n (klik Y/t)";
                cin >> konfirmasi;
                if (konfirmasi == 'Y' || konfirmasi == 'y')
                {
                    cout << "transaksi Berhasil\n";
                    poin = totalHarga / 10000;
                    cout << "Poin yang anda dapatkan" << poin << endl;
                    cout << "apakah anda ingin kembali ke menu utama?\n (klik Y/t)";
                    cin >> konfirmasi;
                    if (konfirmasi == 'Y' || konfirmasi == 'y')
                    {
                        pilih = 0;
                    }
                    else
                    {
                        pilih = 4;
                    }
                }
                else
                {
                    pilih = 4;
                }
            }
            else
            {
                cout << "Maaf Produk yang anda Pilih tidak Ada";
                pilih = 0;
            }
            break;
        case 3:
            cout << "Menu Informasi Pelanggan" << endl;
            if (totalHarga < 10000000)
            {
                cout << "Nama pelanggan : " << namaPelanggan << endl;
                cout << "Status member : MEMBER SILVER" << endl;
                cout << "Jumlah poin : " << poin << endl;
            }
            else if (totalHarga >= 10000000 && totalHarga < 20000000)
            {
                cout << "Nama pelanggan : " << namaPelanggan << endl;
                cout << "Status member : MEMBER GOLD" << endl;
                cout << "Jumlah poin : " << poin << endl;
            }
            else if (totalHarga >= 20000000 && totalHarga < 30000000)
            {
                cout << "Nama pelanggan : " << namaPelanggan << endl;
                cout << "Status member : MEMBER PLATINUM" << endl;
                cout << "Jumlah poin : " << poin << endl;
            }
            else
            {
                cout << "Nama pelanggan : " << namaPelanggan << endl;
                cout << "Status member : MEMBER DIAMOND" << endl;
                cout << "Jumlah poin : " << poin << endl;
            }
            
            break;

        default:
            pilih = 4;
            break;
        }
    } while (pilih != 4);
    cout << "terima kasih sudah Mengunjungi Toko KAMI";
    return 0;
}