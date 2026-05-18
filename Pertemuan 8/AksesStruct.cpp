#include <iostream>
#include <string>
using namespace std;

struct mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main(){
    mahasiswa mhs1;

    mhs1.nama = "Hans";
    mhs1.umur = 18;
    mhs1.ipk = 3.5;

    cout << "Akses dengan tanda (.) " << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "Umur : " << mhs1.umur << endl;
    cout << "IPK : " << mhs1.ipk << endl;

    mahasiswa *ptrmhs = &mhs1;
    cout << "Akses dengan tanda (->) " << endl;
    cout << "Nama : " << ptrmhs->nama << endl;
    cout << "Umur : " << ptrmhs->umur << endl;
    cout << "IPK : " << ptrmhs->ipk << endl;
}