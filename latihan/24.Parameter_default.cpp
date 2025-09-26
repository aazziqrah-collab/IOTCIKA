#include <iostream>
using namespace std;

int hitungTotal(int harga, int diskon =0.10) {
    return harga - (harga * diskon);
}

int main() {
  int hargaBarang;

  cout << "Masukkan harga barang: ";
  cin >> hargaBarang;

  cout << "Total harga dengan diskon default (10%) : RP"
       << hitungTotal(hargaBarang) << endl;

 int diskonUser;
 cout << "Masukkan diskon (dalam persen, cntoh: 0.2 untuk 20%): ";
 cin >> diskonUser;
 cout << "Total harga dengan diskon " << (diskonUser * 100) << "%: RP"
      << hitungTotal(hargaBarang, diskonUser) << endl;
 return 0;
}
