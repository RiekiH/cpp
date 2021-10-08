#include <iostream>
using namespace std;

int main()
{
    int status, jenisBuku, jatuhTempo;
    float rumusJatuhTempo;

    cout << "\n===== PENGHITUNGAN PEMBAYARAN JATUH TEMPO =====";
    cout << "\n1. Dosen";
    cout << "\n2. Mahasiswa";
    cout << "\n3. Mahasiswa luar Kampus\n";
    cout << "\nPilih Status Anda dengan Angka : ";
    cin >> status;

    if (status == 1)
    {
        cout << "\n===== JENIS BUKU =====\n";
        cout << "\n1. Limited Edition";
        cout << "\n2. Tidak Limited Edition";
        cout << "\n\nPilih Jenis Buku : ";
        cin >> jenisBuku;
        cout << "\nBerapa hari peminjaman : ";
        cin >> jatuhTempo;

        if (jenisBuku == 1)
        {
            rumusJatuhTempo = jatuhTempo * 500 + 2000;
            cout << "\nYang perlu dibayar adalah : " << rumusJatuhTempo;
        }
        else if (jenisBuku == 2)
        {
            rumusJatuhTempo = jatuhTempo * 500;
            cout << "\nYang perlu dibayar adalah : " << rumusJatuhTempo;
        }
        else
        {
            cout << "\nError: Jenis buku yang anda inputkan tidak valid";
        }
    }
    else if (status == 2)
    {
        cout << "\n===== JENIS BUKU =====\n";
        cout << "\n1. Limited Edition";
        cout << "\n2. Tidak Limited Edition";
        cout << "\n\nPilih Jenis Buku : ";
        cin >> jenisBuku;
        cout << "\nBerapa hari peminjaman : ";
        cin >> jatuhTempo;

        if (jenisBuku == 1)
        {
            rumusJatuhTempo = jatuhTempo * 600 + 3000;
            cout << "\nYang perlu dibayar adalah : " << rumusJatuhTempo;
        }
        else if (jenisBuku == 2)
        {
            rumusJatuhTempo = jatuhTempo * 600;
            cout << "\nYang perlu dibayar adalah : " << jatuhTempo;
        }
        else
        {
            cout << "\nError: Jenis buku yang anda inputkan tidak valid";
        }
    }
    else if (status == 3)
    {
        cout << "\n===== JENIS BUKU =====\n";
        cout << "\n1. Limited Edition";
        cout << "\n2. Tidak Limited Edition";
        cout << "\n\nPilih Jenis Buku : ";
        cin >> jenisBuku;
        cout << "\nBerapa hari peminjaman : ";
        cin >> jatuhTempo;

        if (jenisBuku == 1)
        {
            rumusJatuhTempo = jatuhTempo * 700 + 4000;
            cout << "\nYang perlu dibayar adalah : " << rumusJatuhTempo;
        }
        else if (jenisBuku == 2)
        {
            rumusJatuhTempo = jatuhTempo * 700;
            cout << "\nYang perlu dibayar adalah : " << rumusJatuhTempo;
        }
        else
        {
            cout << "\nError: Jenis buku yang anda inputkan tidak valid";
        }
    }
    else
    {
        cout << "\nError: Status Anda tidak valid";
    }
}
