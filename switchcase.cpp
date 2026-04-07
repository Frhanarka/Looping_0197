#include <iostream>
using namespace std;

int KodeJurusan;
string NamaJurusan;
string StatusKuota;

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

void pilihanJurusan(){
    switch (KodeJurusan) {
        case 1:
            NamaJurusan = "Teknologi Informasi";
            StatusKuota = "Tersedia (15 kursi)";
            break;
        case 2:
            NamaJurusan = "Teknik Elektro";
            StatusKuota = "kuota penuh";
            break;
        case 3:
            NamaJurusan = "Sistem Informasi";
            StatusKuota = "Tersedia (5 kursi)";
            break;
        default:
            NamaJurusan = "Tidak diketahui";
            StatusKuota = "Error: kode tidak valid";
    }
}

// prosedur output
void output(){
    cout << "\n=== HASIL PENDAFTARAN JURUSAN KAMPUS UMY ===" << endl;
    cout << "Jurusan pilihan: " << NamaJurusan << endl;
    cout << "Status Kuota: " << StatusKuota << endl;
    cout << "--------------------------------------------" << endl;
}

int main() {
    input();
    pilihanJurusan();
    output();
    return 0;
}