#include "header.h"

void inisialisasiMahasiswa(Mahasiswa* mahasiswa, const string& nama) {
    mahasiswa->nama = nama;
    mahasiswa->berikut = NULL;
    for (int i = 0; i < MAKSIMAL_PERTEMUAN; ++i) {
        mahasiswa->kehadiran[i] = 0;
    }
}

void tambahKehadiran(Mahasiswa* mahasiswa, int pertemuan) {
    if (pertemuan >= 1 && pertemuan <= MAKSIMAL_PERTEMUAN) {
        mahasiswa->kehadiran[pertemuan - 1]++;
    }
}

void cetakMahasiswa(Mahasiswa* mahasiswa) {
    cout << "Nama: " << mahasiswa->nama << "\nKehadiran: ";
    for (int i = 0; i < MAKSIMAL_PERTEMUAN; ++i) {
        cout << mahasiswa->kehadiran[i] << " ";
    }
    cout << endl;
}

Mahasiswa* tambahMahasiswa(Mahasiswa* head, const string& nama) {
    Mahasiswa* mahasiswaBaru = new Mahasiswa;
    inisialisasiMahasiswa(mahasiswaBaru, nama);
    mahasiswaBaru->berikut = head;
    return mahasiswaBaru;
}

void tambahKehadiranMahasiswa(Mahasiswa* head, const string& nama, int pertemuan) {
    Mahasiswa* saatIni = head;
    while (saatIni != NULL) {
        if (saatIni->nama == nama) {
            tambahKehadiran(saatIni, pertemuan);
            return;
        }
        saatIni = saatIni->berikut;
    }
    cout << "Mahasiswa tidak ditemukan!" << endl;
}

void cetakSemuaMahasiswa(Mahasiswa* head) {
    Mahasiswa* saatIni = head;
    while (saatIni != NULL) {
        cetakMahasiswa(saatIni);
        saatIni = saatIni->berikut;
    }
}

void hapusSemuaMahasiswa(Mahasiswa* head) {
    Mahasiswa* saatIni = head;
    while (saatIni != NULL) {
        Mahasiswa* mahasiswaBerikutnya = saatIni->berikut;
        delete saatIni;
        saatIni = mahasiswaBerikutnya;
    }
}
