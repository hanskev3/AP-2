#include <iostream>
using namespace std;

void sapa(string nama) { // nama adalah parameter formal
    cout << "Halo " << nama << ", Selamat Datang di AP 2!" << endl;
}

int main () {
    string NamaPengguna = "Alya"; // sapa("Alya")

    sapa(NamaPengguna); // NamaPengguna adalah parameter aktual
}