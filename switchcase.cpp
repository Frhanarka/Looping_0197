#include <iostream>
using namespace std;

int KodeJurusan;
string Jurusan;
string NamaJurusan;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS UMY ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "--------------------------------" << endl;
    cout << "Masukkan Kode Jurusan (1-3): ";
    cin >> KodeJurusan;
}