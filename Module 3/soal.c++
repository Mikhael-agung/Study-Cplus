#include <iostream>
#include <string>
using namespace std;

// Membuat konstanta untuk gaji per-hari, total hari kerja, dan pajak
const int GAJI_MALAM = 160000;
const int GAJI_PAGI = 120000;
const int TOTAL_HARI = 30;
const double PAJAK = 0.05;

// Membuat struktur untuk menyimpan data karyawan
struct Karyawan {
  string nama;
  char shift;
  int izin;
  int hadir;
  double gaji_kotor;
  double gaji_bersih;
  double pajak;
};

int main() {
  // Membuat variabel untuk menampung jumlah karyawan
  int n;

  // Meminta input jumlah karyawan dari user
  cout << "Masukkan jumlah karyawan: ";
  cin >> n;

  // Membuat array untuk menampung data karyawan sebanyak n
  Karyawan karyawan[n];

  // Meminta input data karyawan dari user sebanyak n
  for (int i = 0; i < n; i++) {
    cout << "Masukkan data karyawan ke-" << i+1 << endl;
    // Nama
    cout << "Nama: ";
    cin >> karyawan[i].nama;
    // Shift
    cout << "Shift (P untuk pagi, M untuk malam): ";
    cin >> karyawan[i].shift;
    // Izin
    cout << "Jumlah izin: ";
    cin >> karyawan[i].izin;
    // Hadir
    karyawan[i].hadir = TOTAL_HARI - karyawan[i].izin;
    // Gaji kotor
    if (karyawan[i].shift == 'P' || karyawan[i].shift == 'p') {
      karyawan[i].gaji_kotor = karyawan[i].hadir * GAJI_PAGI;
    }
    else if (karyawan[i].shift == 'M' || karyawan[i].shift == 'm') {
      karyawan[i].gaji_kotor = karyawan[i].hadir * GAJI_MALAM;
    }
    // Pajak
    karyawan[i].pajak = karyawan[i].gaji_kotor * PAJAK;
    // Gaji bersih
    karyawan[i].gaji_bersih = karyawan[i].gaji_kotor - karyawan[i].pajak;
    cout << endl;
  }

  // Mencetak data karyawan
  cout << "Nama\t\t\tShift\t\t\tHadir\t\t\tGaji\t\t\tPajak\t\t\tGaji Bersih" << endl;
  for (int i = 0; i < n; i++) {
    cout << karyawan[i].nama << "\t\t\t" << karyawan[i].shift << "\t\t\t" << karyawan[i].hadir << "\t\t\t" << karyawan[i].gaji_kotor << "\t\t\t" << karyawan[i].pajak << "\t\t\t" << karyawan[i].gaji_bersih << endl;
  }

  return 0;
}
