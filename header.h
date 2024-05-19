#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

#define MAKSIMAL_PERTEMUAN 14

using namespace std;

struct Mahasiswa {
    string nama;
    int kehadiran[MAKSIMAL_PERTEMUAN];
    Mahasiswa* berikut;
};

void inisialisasiMahasiswa(Mahasiswa* mahasiswa, const string& nama);
void tambahKehadiran(Mahasiswa* mahasiswa, int pertemuan);
void cetakMahasiswa(Mahasiswa* mahasiswa);
Mahasiswa* tambahMahasiswa(Mahasiswa* head, const string& nama);
void tambahKehadiranMahasiswa(Mahasiswa* head, const string& nama, int pertemuan);
void cetakSemuaMahasiswa(Mahasiswa* head);
void hapusSemuaMahasiswa(Mahasiswa* head);

#endif
