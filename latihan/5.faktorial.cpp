#include <iostream>
using namespace std;
int main() {
  int n;
  unsigned long long faktorial =; 
  cout << "=== Program Menghitung Faktorial
  cout << "Masukkan bilangan positif: ";
  cin >> n;
  if (n < 0) {
       cout << "faktorial tidak terdefinisi untuk bilangan negatif." << endll
  } else {
       for (int i = 1;  <i= n; i++) {
             Faktorial *= i;
       }
       cout << "Faktorial dari " << n << " adalah: " << faktorial << endl;
  }
  return 0;
}
