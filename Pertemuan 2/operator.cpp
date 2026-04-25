#include <iostream>
using namespace std;
int main() {
    int a = 3;
    int b = 5;

    // Arithmetic Operator
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    int bagi = a / b;
    int modulo = a % b;

// cout << "Hasil Penjumlahan : " << tambah << endl;
// cout << "Hasil Pengurangan : " << kurang << endl;
// cout << "Hasil Perkalian : " << kali << endl;
// cout << "Hasil Pembagian : " << bagi << endl;
// cout << "Hasil Sisa Bagi : " << modulo << endl;

// Relational Operator, bandingin nilai dari dua operand. Hasil berupa boolean
// cout << (a == b) << endl;
// cout << (a < b) << endl;
// cout << (a != b) << endl;


// Logical Operator (&&, ||, !), bandingkan 2 nilai variabel yg bertipe boolean.
// cout << (true && true) << endl;
// cout << (true && false) << endl;

//cout << (true || false) << endl;
// cout << (false || false) << endl;

// cout << !true << endl;
// cout << !false << endl;

// Bitwise Operator --> biner (&, |, ^, ~, <<, >>)
// cout << (5 & 7) << endl;
// cout << (5 | 7) << endl;
// cout << (5 ^ 7) << endl;
// cout << (~7) << endl;
// cout << (7 << 2) << endl;
// cout << (7 >> 2) << endl;


// 5 & 7

// 1 byte terdiri dari 8 bit
// si angka 5 = _ _ _ _ _ _ _ _

// 128 64 32 16 8 4 2 1
// biner dari 5 = 0 0 0 0 0 1 0 1
// biner dari 7 = 0 0 0 0 0 1 1 1
//                ---------------- &
//                0 0 0 0 0 1 0 1 = 5     

// biner dari 7 = 0 0 0 0 0 1 1 1

// 7 << 2 (SHL)
// 7 = 0 0 0 0 0 1 1 1

// SHL , buang bit dari kiri, masukkan 2 angka "0" dari kanan
// 0 0 0 1 1 1 0 0 = 28

// SHL 2, buang 2 bit dari kanan, masukkan 2 angka "0" dari kiri
// 0 0 0 0 0 0 0 1 = 1

// 48 << 2 (SHL)
// 48 = 0 0 0 0 1 1 0 0
// SHL , buang bit dari kiri, masukkan 2 angka "0" dari kanan
// 0 0 1 1 0 0 0 0 = 192

// 48 >> 2 (SHR)
// 48 = 0 0 0 0 1 1 0 0
// SHR , buang 2 bit dari kanan, masukkan 2 angka "0" dari kiri
// 0 0 0 0 0 0 1 1 = 3

// Operator Kondisional (?), Ternary, kondisi -> hasil1 ? hasil2
// int max;
// max = (a > b) ? a : b;
// cout << "Nilai terbesar adalah : " << max << endl; // 5

// Shorthand
// a += 7; // a = a + 7
// cout << a << endl;

// Increment, Decrement
// Pre Increment, ++ ada di depan variabel
// cout << a << endl; // 3
// cout << ++a << endl; // ++3 = 4

// Post Increment, ++ ada di belakang variabel
// cout << a << endl; // 3
// cout << a++ << endl; // 3 + 1
// cout << a << endl;

// Pre Decrement, -- ada di depan variabel
// cout << b << endl; // 5
// cout << --b << endl; // --5 = 4

// Post Decrement, -- ada di belakang variabel
// cout << b << endl; // 4
// cout << b-- << endl; // 4 - 1
// cout << b << endl; // 3
}