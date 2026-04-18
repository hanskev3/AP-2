#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Isi awal vector
    vector<string> mahasiswa = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};

    // Nomor 1
    cout << "Isi vector awal:" << endl;
    for (string nama : mahasiswa) {
        cout << nama << endl;
    }

    // Nomor 2
    mahasiswa.push_back("Houra");

    // Nomor 3
    mahasiswa.pop_back();

    // Nomor 4
    mahasiswa.erase(mahasiswa.begin() + 1);

    // Nomor 5
    cout << "\nIsi vector setelah perubahan:" << endl;
    for (string nama : mahasiswa) {
        cout << nama << endl;
    }

    // Nomor 6
    cout << "\nJumlah data tersisa: " << mahasiswa.size() << endl;
}