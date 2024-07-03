/*
MIN MAX

Deskripsi :
Diberikan empat bilangan bulat, buatlah sebuah program untuk mencetak nilai minimum dan maksimum di antara keempat bilangan tersebut.

Batasan :
- Setiap bilangan bulat berada di antara -100 hingga 100.

Format Input:
- Input terdiri dari empat bilangan bulat, masing-masing pada baris baru.

Format Output :
Cetak dua baris:
- "Bilangan Terkecil: A", di mana A adalah nilai minimum.
- "Bilangan Terbesar: B", di mana B adalah nilai maksimum.

#-- Contoh 1 --#
Input:
5
10
14
9

Output:
Bilangan Terkecil: 5
Bilangan Terbesar: 14

--------------------
#-- Contoh 2 --#
Input:
-3
-7
0
2

Output:
Bilangan Terkecil: -7
Bilangan Terbesar: 2

--------------------
#-- Contoh 3 --#
Input:
1
5
3
4

Output:
Bilangan Terkecil: 1
Bilangan Terbesar: 5

--------------------
#-- Contoh 4 --#
Input:
-10
-20
-5
-15

Output:
Bilangan Terkecil: -20
Bilangan Terbesar: -5

--------------------
*/
#include <iostream>

int main() {
  int input_bilangan;
  bool input_pertama = true;
  int bil_terkecil;
  int bil_terbesar;

  for(int i = 0; i < 4; i++) {
    std::cout << ">> ";
    std::cin >> input_bilangan;

    if(input_pertama == true) {
      input_pertama = false;
      bil_terkecil = input_bilangan;
      bil_terbesar = input_bilangan;
    } else {
      if(input_bilangan > bil_terbesar) {
        bil_terbesar = input_bilangan;
      }
      if(input_bilangan < bil_terkecil) {
        bil_terkecil = input_bilangan;
      }
    } 
  }

  std::cout << "Bilangan Terkecil: " << bil_terkecil << std::endl;
  std::cout << "Bilangan Terbesar: " << bil_terbesar << std::endl;

  return 0;
}
