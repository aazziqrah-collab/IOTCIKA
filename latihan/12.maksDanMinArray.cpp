#include <iostream>
using namespace std;

 int main() {
   int n;

cout << "PROGRAM MENCARI NILAI MAKSIMUM DAN MINIMUM" << endl;
cout << "==========================================" << endl;

//Input jumlah elemen array
cout << "Masukkan jumlah elemen array: ";
cin >> n;

int arr[n];

//Input elemen array
cout << "Masukkan " << n << " elemen array: " << endl;
for (int i = 0; i < n; i++) {
cout << " Elemen ke-" << i + 1 << ": ";
cin >> arr [i];
}

// inisialisasi nilai max dan min
int max = arr[0];
int min = arr[0];

// menacari nilai maxium dan minimum
for (int i = 
