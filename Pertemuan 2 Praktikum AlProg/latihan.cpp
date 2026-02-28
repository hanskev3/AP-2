#include <iostream>
using namespace std;

// Latihan : Buatlah sebuah program untuk menentukan volume dan luas permukaan sebuah bola

int main() {
    float r, phi = 3.14, volume, luaspermukaan;

    cout << "Masukkan jari-jari : ";
    cin >> r;

    volume = (4.0/3.0) * phi * r * r * r;
    luaspermukaan = 4 * phi * r * r;

    cout << "Volume = " << volume << endl;
    cout << "Luas Permukaan = " << luaspermukaan << endl;
}


