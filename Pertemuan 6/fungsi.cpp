#include <iostream>
using namespace std;

// Fungsi tanpa nilai balikan (void)
void tampilPesan() {
    cout << "======== Selamat Datang di AP 2! ========" << endl;
}

// Fungsi dengan nilai balikan (int, double, float dsb)
int tambah(int a, int b) {
    return a + b;
}

// fungsi overload, fungsi dengan nama yang sama, tapi parameter nya beda, tipe nya beda
int kali(int a, int b) {
    return a * b;
}

double kali (double a, double b) {
    return a * b;
}

// funngsi Rekursif, fungsi yang memanggil dirinya sendiri
int faktorial(int n) {
    if (n == 0 || n == 1) { // base case
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    system("CLS");

    // memanggil fungi tanpa nilai balikan
    tampilPesan();

    // memanggil fungsi dengan nilai balikan
    int x = 5, y = 3;
    int hasilTambah = tambah(x, y); // 8
    cout << "Hasil penjumlahan : " << hasilTambah << endl;

    // menggunakan fungsi overload
    int hasilKaliInt = kali(x, y);

    double n = 3, m = 5;
    double hasilKaliDouble = kali(n, m);

    cout << "Hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "Hasil perkalian (double) : " << hasilKaliDouble << endl;

    // menggunakan fungsi rekursif
    int angka = 5;
    int hasilFaktorial = faktorial(angka);
    cout << "Hasil faktorial dari " << angka << " : " << hasilFaktorial << endl;

}