#include <iostream>
using namespace std;

class contohakses {
    private:
        int privateVar;
    
    protected:
        int protectedVar;

    public:
        int publicVar;

    // Constructor 
    contohakses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkansemua(){
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// Inheritance (Pewarisan), class turunan
class turunan : public contohakses {
    public:
        void aksesprotected(){
            // cout << privateVar << endl; //error
            cout << protectedVar << endl;
            cout << publicVar << endl;
        }

};


int main(){
    contohakses obj;
    obj.tampilkansemua();
    
    cout <<"\nAkses dari luar class : " << endl;
    // cout << obj.privateVar << endl; // error
    // cout << obj.protectedVar << endl; // error
    cout << obj.publicVar << endl;

     cout <<"\nAkses dari class turunan : " << endl;
     turunan tur;
     tur.aksesprotected();
}