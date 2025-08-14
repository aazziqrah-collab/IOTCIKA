#include <iostream>
using namespace std;

int main () {
     int angka;

cout << "=== Program Menentukan Bilangan Ganjil/Genap ===" << endl;
cout << "Masukkan sebuah bilangan: ";
cin >> angka;

if (angka % 2 == 0) {
   cout << angka << " adalah bilangan Genap." << endl;
} else {
  cout << angka << " adalah bilangan Ganjil." << endl;
}

return 0;
}
