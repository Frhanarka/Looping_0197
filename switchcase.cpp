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

//prosedur untuk pengecekan kondisi

void pilihan(){
    switch (KodeJurusan) {
        case 1:
            NamaJurusan = "Teknologi Informasi";
            statuskuota = "Tersedia (15 kursi)";
            break;
        case 2:
            NamaJurusan = "Teknik Elektro";
            statuskuota = "kuota penuh";
            break;
        case 3:
            NamaJurusan = "Sistem Informasi";
            statuskuota = "Tersedia (5 kursi)";
            break;
        default:
            NamaJurusan = "Tidak diketahui";
            statuskuota = "Error: kode tidak valid";
    }
}