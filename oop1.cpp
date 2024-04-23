#include <iostream>
using namespace std ;

class Mahasiswa{
    public :
        string nama;
        int umur;
        string jurusan;

        void tampilData(){
            cout << "Nama \t: "<< nama << endl;
            cout << "Umur \t: "<< umur << endl;
            cout << "Jurusan \t: "<< jurusan << endl;
        }
};

class Matakuliah{
    private :
        string kodeMK;
        string namaMK;
        int sks;
    public :
        void inputMK(){
            cout << "Masukkan kode\t: ";
            cin >> kodeMK;
            cout << "Masukkan nama\t: ";
            cin >> namaMK;
            cout << "Masukkan sks\t: ";
            cin >> sks;
        }
        void tampilMK(){
            cout << "Kode MK\t: " << kodeMK << endl;
            cout << "Nama MK\t: " << namaMK << endl;
            cout << "Sks\t: " << sks << endl;
        }
};