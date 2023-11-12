#include <iostream>
using namespace std;

int main()
{
    cout << "#---------------------BANK CENTRAL ANJAY----------------------#\n";
    cout << "#                     ===   -BCA-    ===                      #\n";
    cout << "#---------------------BANK CENTRAL ANJAY----------------------#\n\n";
    // Inisialisasi karo Deklarasi
    int KodeKartu, PIN, NomorRekening, NomorVA;
    int default_KodeKartu = 111, default_PIN = 222, default_Saldo = 333, default_NomorRekening = 444, default_NomorVA = 55555;
    int pilih, nominal;
    char lanjut;
    int kesempatan = 0;
    int ulang = 0;

    // Loop Gawe Validasi Kode Kartu dan PIN
    while (ulang < 3)
    {
        cout << "Masukkan Kode Kartu: ";
        cin >> KodeKartu;
        cout << "Masukkan PIN: ";
        cin >> PIN;
        cout << endl;

        if ((KodeKartu == default_KodeKartu) && (PIN == default_PIN))
        {
            // Loop Gawe Menu Transaksi(Utama)
            do
            {
                cout << "Menu: \n";
                cout << "1. Transfer \n";
                cout << "2. Tarik Tunai \n";
                cout << "3. Setor Tunai \n";
                cout << "4. Info Saldo \n";
                cout << "5. Pembayaran Virtual Account \n";
                cout << "0. EXIT \n";
                cout << "Masukkan Pilihan Anda: ";
                cin >> pilih;
                cout << endl;
                switch (pilih)
                {
                case 1:
                    // Implementasi Program Gawe Case 1
                    do
                    {
                        cout << "#--------------------------TRANSFER---------------------------#\n\n";
                        cout << "Masukkan Nomor Rekening Tujuan: ";
                        cin >> NomorRekening;
                        if (NomorRekening == default_NomorRekening)
                        {
                            cout << "Masukkan Nominal Yang Ingin di Transfer: Rp.";
                            cin >> nominal;
                            cout << "                                           ^^^^^^ \n";
                            if (default_Saldo >= nominal)
                            {
                                cout << "---------------------------------------- \n";
                                cout << "Transaksi Berhasil dan Sedang di Proses!! \n";
                                default_Saldo = default_Saldo - nominal;
                                cout << "                |-----------| \n";
                                cout << "Sisa Saldo Anda: Rp." << default_Saldo << endl;
                                cout << "                |-----------| \n";
                                cout << "---------------------------------------- \n";
                                break;
                            }
                            else
                            {
                                default_Saldo <= nominal;
                                cout << "*-------------------------------------------------------------* \n";
                                cout << "         Transaksi Gagal, Saldomu Kureng (Kerjo Maneh!!) \n";
                                cout << "*-------------------------------------------------------------* \n\n";
                                break;
                            }
                        }
                        else
                        {
                            ulang == 1;
                            cout << endl;
                            cout << "|-------------------------------------------------------------| \n";
                            cout << "         Nomor Rekening Tidak Terdaftar, Mohon Ulangi! \n";
                            cout << "|-------------------------------------------------------------| \n";
                        }
                    } while (ulang < 1);
                    break;
                case 2:
                    // Implementasi Program Gawe Case 2
                    cout << "#-------------------------TARIK TUNAI-------------------------#\n\n";
                    cout << "Masukkan Nominal Yang di Inginkan: Rp.";
                    cin >> nominal;
                    cout << "                                     ^^^^^^ \n";
                    if (nominal <= default_Saldo)
                    {
                        cout << "*-------------------------------------------------------------* \n";
                        cout << "Transaksi Anda Berhasil dan Sedang di Proses!! \n";
                        default_Saldo = default_Saldo - nominal;
                        cout << "                |-----------| \n";
                        cout << "Sisa Saldo Anda: Rp." << default_Saldo << endl;
                        cout << "                |-----------| \n";
                        cout << "*-------------------------------------------------------------* \n";
                    }
                    else
                    {
                        default_Saldo <= nominal;
                        cout << "*-------------------------------------------------------------* \n";
                        cout << "         Transaksi Gagal, Saldomu Kurang (Kerjo Maneh!!) \n";
                        cout << "*-------------------------------------------------------------* \n\n";
                    }
                    break;
                case 3:
                    // Implementasi Program Gawe Case 3
                    cout << "#-------------------------SETOR TUNAI-------------------------#\n\n";
                    cout << "Masukkan Nominal Yang Mau di Setor Tunai: Rp.";
                    cin >> nominal;
                    cout << "                                            ^^^^^^ \n";
                    default_Saldo += nominal;
                    cout << "                                                             |-----------| \n";
                    cout << "Transaksi Berhasil, Duit Anda Sudah di Hap:) Sisa Saldo Anda: Rp." << default_Saldo << endl;
                    cout << "                                                             |-----------| \n";
                    break;
                case 4:
                    // Implementasi Program Gawe Case 4
                    do
                    {
                        cout << "#-------------------------INFO SALDO--------------------------#\n\n";
                        cout << "Untuk Mengetahui Saldo Anda, Silahkan Masukkan PIN \n";
                        cout << "Masukkan PIN: ";
                        cin >> PIN;
                        cout << endl;
                        if (PIN == default_PIN)
                        {
                            cout << "                    |-----------| \n";
                            cout << "Saldo Anda Sekarang: Rp." << default_Saldo << endl;
                            cout << "                    |-----------| \n";
                            break;
                        }
                        else
                        {
                            kesempatan++;
                            if (kesempatan == 2)
                            {
                                cout << "*-------------------------------------------------------------* \n";
                                cout << "     Masukkan PIN Yang Benar Tolol! 1x Kesempatan Lagi!!! \n";
                                cout << "*-------------------------------------------------------------* \n\n";
                            }
                            if (kesempatan == 3)
                            {
                                ulang = 3;
                                cout << "*-------------------------------------------------------------* \n";
                                cout << "            ATM Anda di BLOKIR!!!, Mampus Kau Anj \n";
                                pilih = 0;
                                break;
                            }
                        }
                    } while (kesempatan < 3);
                    break;
                case 5:
                    // Implementasi Program Gawe Case 5
                    cout << "#-----------------PEMBAYARAN VIRTUAL ACCOUNT------------------#\n\n";
                    cout << "Masukkan Nomor Virtual Account: ";
                    cin >> NomorVA;
                    cout << "Masukkan Nominal Pembayaran: Rp.";
                    cin >> nominal;
                    cout << "                               ^^^^^^ \n";
                    if (nominal > default_Saldo)
                    {
                        cout << "Saldo Anda Tidak Mencukupi, Anj! \n";
                    }
                    else
                    {
                        default_Saldo -= nominal;
                        cout << "Pembayaran Berhasil, Sisa Saldo Anda: " << default_Saldo << endl;
                    }
                    break;
                case 0:
                    // Langsung Kongkon Execute Program
                    ulang = 3;
                    cout << "#-------------------------------------------------------------# \n";
                    cout << "#----------------------------EXIT-----------------------------# \n";
                    cout << "#-------------------------------------------------------------# \n";
                    break;
                }
                if (pilih != 0)
                {
                    cout << "Apakah Ingin Melanjutkan Transaksi Lain? (Y/N): ";
                    cin >> lanjut;
                    cout << endl;
                    if (lanjut == 'N' || lanjut == 'n')
                    {
                        pilih = 0;
                    }
                }
            } while (pilih != 0);
            ulang = 3;
        }
        else
        {
            ulang = ulang + 1;
            if (ulang == 2)
            {
                cout << "#---------------------!!!WARNING ALERT!!!---------------------#\n";
                cout << "       Masukkan PIN Yang Benar Tolol! 1x Kesempatan Lagi     \n\n";
            }
            if (ulang == 3)
            {
                cout << "*-------------------------------------------------------------* \n";
                cout << "            ATM Anda di BLOKIR!!!, Mampus Kau Anj \n";
            }
        }
    }
    cout << "          Silahkan Meninggalkan ATM, Nyrimpeti ae!! \n";
    cout << "*-------------------------------------------------------------* \n";
    return 0;
}