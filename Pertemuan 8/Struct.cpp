#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct alamat {
    string jalan;
    string kota;
    int kode_pos;
};

struct mahasiswa {
    string nama;
    int umur;
    float ipk;
    alamat almt; // Nested struct 
};

int main (){
    mahasiswa mhs1;

    // mhs1.almt.jalan = "Jl. Jamin Ginting no. 123";
    // mhs1.almt.kota = "Medan";
    // mhs1.almt.kode_pos = 20155;

    // cout << "Alamat : " << mhs1.almt.jalan << ", " << mhs1.almt.kota << " " << mhs1.almt.kode_pos << endl;

    vector<mahasiswa> mhs;
    int n;
    cout << "Masukkan jumlah Mahsiswa : ";
    cin >> n;

    for(int i =0; i < n; i++){
        cout << "Mahasiswa " << i+1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan IPK : ";
        cin >> mhs1.ipk;

        mhs.push_back(mhs1);
    }

    cout<<endl;
    for (int i = 0; i < mhs.size(); i++){
        cout << "Mahasiswa " << i+1 << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Umur : " << mhs[i].umur << endl;
        cout << "IPK : " << mhs[i].ipk << endl;
    }

}