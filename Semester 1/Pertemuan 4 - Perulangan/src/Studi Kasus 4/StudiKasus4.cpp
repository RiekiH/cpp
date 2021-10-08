#include <iostream>
using namespace std;

int main()
{
    int statusBerlangganan;
    int jumlahFotocopy;
    int pelanggan;

    cout << "\n===== APLIKASI TOKO PERCETAKAN =====\n";
    cout << "1. Berlangganan\n";
    cout << "2. Tidak Berlangganan\n";
    cout << "\nPILIH STATUS LANGGANAN ANDA : ";
    cin >> pelanggan;

    if (pelanggan == 1)
    {
        cout << "\n===== DAFTAR HARGA =====\n";
        cout << "\nFotocopy kurang dari 100 lembar = Rp.75 / Lembar";
        cout << "\nFotocopy Lebih dari 100 lembar = Rp.50 / Lembar\n\n";

        cout << "Jumlah Fotocopy : ";
        cin >> jumlahFotocopy;

        if (jumlahFotocopy < 100)
        {
            cout << "Harga : " << (jumlahFotocopy * 75);
        }
        else if (jumlahFotocopy >= 100)
        {
            cout << "Harga : " << (jumlahFotocopy * 50);
        }

        else
        {
            cout << "Harga : " << jumlahFotocopy;
        }
    }
    else if (pelanggan == 2)
    {
        cout << "\n===== DAFTAR HARGA =====\n";
        cout << "\nFotocopy kurang dari 100 lembar = Rp.100 / Lembar";
        cout << "\nFotocopy Lebih dari 100 lembar = Rp.85 / Lembar\n\n";

        cout << "Jumlah Fotocopy : ";
        cin >> jumlahFotocopy;

        if (jumlahFotocopy < 100)
        {
            cout << "Harga : " << (jumlahFotocopy * 100);
        }
        else if (jumlahFotocopy >= 100)
        {
            cout << "Harga : " << (jumlahFotocopy * 85);
        }

        else
        {
            cout << "Harga : " << jumlahFotocopy;
        }
    }
}
