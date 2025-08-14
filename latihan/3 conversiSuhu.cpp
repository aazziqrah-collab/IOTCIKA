#include <iostream>
using namespace std;
int main() {
  double suhu;
  int pilihan;
  cout << "=== Program Konversi Suhu ===; << endl;
  cout << "Pilih Satuan Asal:" <<endl;
  cout "1, Celsius" <<endl;
  cout "2, Fahremeit" << endl;
  cout "3, Kelvin" << endl;
  cout "Masukkan Pilihan (1-3): ";
  cin >> pilihan;
  cout << "Masukkan nilai suhu: ";
  cin >> suhu; cout << fixed;
  switch (pilihan) {
case 1: //celsius
    cout << "\nDari Celsius:" << endl;
    cout << "Fahrenheit: " << (suhu * 9/5) + 32 << endl;
    cout << "kelvin: " << suhu +273.15 << endl;
    break;
case 2: //Fahrenheit
    cout << "\nDari Fahrenheit:" << endl;
    cout << "Celcius: " << (suhu - 32) * 5/9 << endl;
    cout << "kelvin: " << (suhu - 32) * 5/9 + 273.15 << endl;
    break;
case 3: // Kelvin
    cout << " /nDari Kelvin:" << endl;
    cout << "Celcius: " << suhu - 273.15 << endl;
    cout << "Fahrenheit: " << (suhu - 273.15) * 9/5 + 32 << endl;
    break;
default:
     cout << 'Pilihan tidak valid!" << endl;
     }
return 0;
}
