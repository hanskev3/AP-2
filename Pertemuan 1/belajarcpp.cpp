#include <iostream> // header standar C++
#include <conio.h> // header untuk fungsi getch() dan getche() pada Windows
using namespace std;

int main () {
    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;

    cout << "Hello World !!" << endl;

    cout << "Masukkan Nama : ";
    // cin >> nama;
    getline(cin, nama); // agar karakter spasi terbaca

    cout << "Masukkan kom : ";
    cin >> kom;

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) : "; // getche
    jenisKelamin = getche(); // agar karakter langsung tampil, jadi tidak perlu tekan enter

    /*ini untuk Output*/
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    // cout << "Jenis Kelamin : " << jenisKelamin << endl;
    putchar(jenisKelamin); // untuk menampilkan karakter "Jenis Kelamin"

    getch(); // karakter yang kita ketik tidak ditampilkan di layar
}
