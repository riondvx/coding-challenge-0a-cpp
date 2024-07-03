/*
MENAMPILKAN ELEMEN ARRAY

Deskripsi :
Buatlah sebuah program yang memberikan output seperti dibawah ini dengan menggunakan array yang sudah disediakan. Gunakan perulangan untuk memanggil setiap elemen pada indeks arraynya.

Contoh :
N = 5
Array = {100, 23, 45, 71, 89}

Output :
Isi elemen dengan indeks 0 : 100
Isi elemen dengan indeks 1 : 23
Isi elemen dengan indeks 2 : 45
Isi elemen dengan indeks 3 : 71
Isi elemen dengan indeks 4 : 89
*/

#include <iostream>

int main() {
  const int N = 5;
  int nilai[N] = {100, 23, 45, 71, 89};

  for (int index = 0; index < N; index++) {
    int elemen = nilai[index];
    std::cout << "Isi elemen dengan indeks " << index
      << " : " << elemen << std::endl;
  }

  return 0;
}
