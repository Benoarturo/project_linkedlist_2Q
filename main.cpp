#include "header.h"

int main() {
    Mahasiswa* daftar = NULL;
    int pilihan;
    string nama;
    int pertemuan;

    do {
        cout << "\n========================\n";
        cout << "          Menu";
        cout << "\n========================\n";
        cout << "|1. Tambah Mahasiswa\n";
        cout << "|2. Tambah Kehadiran\n";
        cout << "|3. Cetak Semua Mahasiswa\n";
        cout << "|4. Keluar";
        cout << "\n========================\n";
        cout << "Pilih opsi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama mahasiswa: ";
                cin.ignore();
                getline(cin, nama);
                daftar = tambahMahasiswa(daftar, nama);
                break;
            case 2:
                cout << "Masukkan nama mahasiswa: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan nomor pertemuan (1-14): ";
                cin >> pertemuan;
                tambahKehadiranMahasiswa(daftar, nama, pertemuan);
                break;
            case 3:
                cetakSemuaMahasiswa(daftar);
                break;
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid, coba lagi.\n";
                break;
        }
    } while (pilihan != 4);

    hapusSemuaMahasiswa(daftar);

    return 0;
}
