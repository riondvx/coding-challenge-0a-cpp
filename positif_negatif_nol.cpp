/*
POSITIF, NEGATIF DAN NOL

Deskripsi :
Diberikan sebuah bilangan bulat (N), tentukan apakah bilangan tersebut termasuk kedalam bilangan positif, negatif, atau nol.

Batasan :
- Nilai bilangan bulat (N) ((-10^9) ≤ N ≤ (10^9))

Format Input :
- Satu baris berisi sebuah bilangan bulat (N).

Format Output :
- Satu baris yang mencetak "Positif" jika (N) adalah bilangan positif.
- Satu baris yang mencetak "Negatif" jika (N) adalah bilangan negatif.
- Satu baris yang mencetak "Nol" jika (N) adalah nol.

#-- Contoh 1 --#
Input :
5

Output :
Positif


#-- Contoh 2 --#
Input :
-3

Output :
Negatif


#-- Contoh 3 --#
Input :
0

Output :
Nol


#-- Contoh 4 --#
Input :
10

Output :
Positif

*/

#include <iostream>

int main() {
  int bilangan_n;
  std::cout << ">> ";
  std::cin >> bilangan_n;

  if(bilangan_n == 0) {
    std::cout << "Nol\n";
  }
  else if(bilangan_n > 0) {
    std::cout << "Positif\n";
  }
  else {
    std::cout << "Negatif\n";
  }
  
  return 0;
}
