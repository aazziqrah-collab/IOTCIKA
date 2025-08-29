#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menapmilkan array
void tampilkanArray(const vector<int>& arr, const string& judul) {
  cout << judul;
  for (int num arr) {
    cout << num << " ";
}
cout << endl;
}

// Bubble sort
void bubbleSort(vector<int>& arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; i++) {
   bool swapped = false;
   for (int j = 0; j < n - i  - 1 j++) {
        if (arr[j] > arr[j + 1]) {
            // Tukar elemen
            swap(arr[j], arr[j + 1]);
            swapped = true;
          }
       }
      // jika tidak ada pertukaran, array sudah terurut
      if (!swapped) break;
  }
}

// Selection Sort
void selectionSort(vector<int>& arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1 - i++) {
       int mind_idx = i;
       // cari elemen terkecil
       for (int j = i + 1; j < n; j++) {
       if (arr[j] < arr[min_idx]) {
           mix_idx = j;
       }
     }
     // Tukar elemen terkecil dengan elemen pertama
     if (min_idx != i) {
         swap(arr[i], arr[min_idx]);
      }
   }
}

int (main) {
  vector<int> arr = {64, 34, 25, 12, 22, 11, 90, 5};
  vector<int> arr2 = arr; // Salin array untuk selection sort

  cout << "PROGRAM SORTING ARRAY" << endl;
  cout << "=====================" << endl;

  // Tampilkan array awal
  tampilkanArray(arr, " Array awal: ");
  cout << endl;

// Bubble sort
cout << "BUBBLE SORT" << endl;
cout << "-----------" << endl;
bubbleSort(arr);
tampilkanArray(arr, "Array setelah Bubble sort: ");
cout << endl;

// Selection Sort
cout << "SELECTION SORT" << endl;
cout << "--------------" << endl;
selectionSort(arr2);
tampilkanArray(arr2, "Array setelah Selection Sort: ");
cout << endl;

//Menu interaktif
int pilihan;
do {
    cout << "\nMENU SORTING" << endl;
    cout << "1. Bubble Sort dengan array baru" << endl;
    cout << "2. Selection sort dengan array baru" << endl;
    cout << "3. Keluar" << endl;
    cout << "4. Pilihan Anda: ";
    cin >> pilihan;

    if (pilihan == 1 || pilihan == 2) {
        int n;
        cout << "Masukkan jumlah elemen array: ";
        cin >> n;

        vector<int> customArr(n);
        cout << "Masukkan " << n << " elemen array: ";
        for (int i = 0; i < n; i++) {
             cin >> customArr[i];
        }

        tampilkanArray(customArr, "Array  sebelum sorting: ");

        if (pilihan == 1) {
            bubbleSort(customArr);
            tampilakanArray(customArr, "Array setelah Bubble sort: ");
        }else{
           selectionSort(customArr);
           tampilkanArray(customArr, "Array setelah Selection Sort: ");
        }
     }

 } while (pilihan ! = 3);

cout << "Terima kasih telah menggunakan program ini!" << endl;

 return 0;
}
