#include <iostream>
#include <string>
#include <cmath>
// 3 libraries yang akan kita masukan kedalam program ini

using namespace std;

void TampilTambah(int q, int i) {
  int a,b,hasil1; // declaration variable in function
  a = pow(q, 2);
  b = pow(i, 2);
  hasil1 = a + b;
  cout << " - Hasil dari nilai " << q << " + " << i << " = " << hasil1 << endl;
  cout << " - Hasil akarnya adalah " << sqrt(hasil1) << endl; // ini dia hasil akarnya
} // phytagoras tambah

void TampilKurang(int c, int d) {
  int e,f,hasil2; // declaration variable in function
  e = pow(c, 2);
  f = pow(d, 2);
  hasil2 = e - f;
  cout << " - Hasil dari nilai " << c << " - " << d << " = " << hasil2 << endl;
  cout << " - Hasil akarnya adalah " << sqrt(hasil2) << endl; // ini dia hasil akarnya yang kedua
}

int main(){
  cout << "\n               <-----> KALKULATOR PHYTAGORAS <----->               \n" << endl; // first segmen

  for( long bintang1 = 1; bintang1 <= 2; bintang1++ ) {
    for( long bintang2 = 1; bintang2 <= 60; bintang2++ ) {
      cout << "=";
    }
    cout << endl; // newline
  }
  cout << "\nDeskripsi: Tool ini merupakan kalkulator Phytagoras, yang dapat menghitungnya \n";
  cout << "Langsung tanpa menghitung melalui kalkulator biasa." << endl;

  int x,y; // deklarasi variable
  char operand;
  cout << "1. Masukan sisi pertama : ";
  cin >> x;
  cout << endl; // baris baru
  // angka pertama

  cout << "2. Masukan operatornya \n";
  cout << "Operator tersedia + dan - : ";
  cin >> operand;
  cout << endl; // baru baru
  // operator input

  cout << "3. Masukan sisi kedua : ";
  cin >> y;
  cout << endl; // baris baru
  // angka kedua

  switch(operand) {
    case '+':
    TampilTambah(x,y);
    break;

    case '-':
    TampilKurang(x,y);
    break;

    default:
    cout << "Tololl" << endl;
    int ulang = 1;
    while( ulang <= 500 ) {
      cout << "Error operator on " << ulang << endl; // sukurin..awokawokawokaowkawok
      ulang++; // incrementnya
    }
    break;

  }

  cin.get();
  return 0;
}
