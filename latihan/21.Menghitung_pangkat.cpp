#include <iostream>
using namespace std;

int hitungPangkat(int basis, int eksponen) {
  int hasil = 1;
  for (int i = 0; i < eksponen; i++) {
      hasil *= basis;
  }
  return hasil;
}

int main () {
  int a, b, c;
  cout << "Masukkan bilangan basis: ";
  cin >> a;
  cout << "Masukkan bilnangan pangkat: ";
  cin >> c;
  cout << a << "^ << b << " = " << hitungPangkat(a, b) << endll

  return 0;
}
