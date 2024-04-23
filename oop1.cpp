#include <iostream>
using namespace std ;

class Mahasiswa{
    public :
        string nama;
        int umur;
        string jurusan;

        void output(){
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
        void input(){
            cout << "Kode MK\t: ";
            cin >> kodeMK;
            cout << "Nama MK\t: ";
            cin >> namaMK;
            cout << "Sks\t: ";
            cin >> sks;
        }
        void tampilMK(){
            cout << "Kode MK\t: " << kodeMK << endl;
            cout << "Nama MK\t: " << namaMK << endl;
            cout << "Sks\t: " << sks << endl;
        }
};