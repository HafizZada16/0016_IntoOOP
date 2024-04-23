#include <iostream>
using namespace std ;

class Mahasiswa{
    public : // Akses modifier
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
        string kodeMk;
        string namaMk;
        int sks;
    public :
        void input(){
            cout << "Kode MK\t: ";
            cin >> kodeMk;
            cout << "Nama MK\t: ";
            cin >> namaMk;
            cout << "Sks\t: ";
            cin >> sks;
        }
        void output(){
            cout << "Kode MK\t: " << kodeMk << endl;
            cout << "Nama MK\t: " << namaMk << endl;
            cout << "SKS\t: " << sks << endl;
        }
};

int main(){
    Mahasiswa mhs;
    Matakuliah mk;

    mhs.nama = "Budi";
    mhs.umur = 20;
    mhs.jurusan = "Teknik Informatika";
    mhs.output();

    mk.input();
    mk.output();

    return 0;
} 