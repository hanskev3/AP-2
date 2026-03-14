// Buatlah program yang meminta pengguna memasukkan berat badan dalam satuan kilogram, kemudian menentukan kategori berat badan berdasarkan syandar BMI (Body Mass Index)

#include <iostream>
using namespace std;

int main () {
    float berat, tinggi, bmi;

    system("CLS");
    cout << "Masukkan Berat Badan (kg) : ";
    cin >> berat;
    cout << "Masukkan Tinggi Badan (m) : ";
    cin >> tinggi;

    bmi = berat / (tinggi * tinggi);

    cout << "Bmi Anda : " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kategori Berat Badan : Kurang" << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "Kategori Berat Badan : Normal" << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "Kategori Berat Badan : Berlebih" << endl;
    } else if (bmi >= 30) {
        cout << "Kategori Berat Badan : Obesitas" << endl;
    }
}