#include <iostream>
using namespace std;

int main()
{
    int harga;
    int pilihan;

    cout << "\n1. Penghitung Discount\n";
    cout << "2. Penghitung Total harga setelah discount\n";
    cout << "\nPilih menggunakan angka : ";
    cin >> pilihan;

    if (pilihan == 1)
    {
        cout << "\n===== PENGHITUNG DISCOUNT =====" << endl;
        cout << "\nHarga Barang : ";
        cin >> harga;

        if (harga >= 100000 && harga <= 199900)
        {
            cout << "\nTotal Discount :" << (harga * 10 / 100);
        }
        else if (harga >= 200000 && harga <= 299900)
        {
            cout << "\nTotal Discount :" << (harga * 20 / 200);
        }
        else if (harga >= 300000 && harga <= 399900)
        {
            cout << "\nTotal Discount :" << (harga * 25 / 250);
        }
        else
        {
            cout << "\nMaaf harga tersebut tidak mendapatkan discount";
        }
    }
    else if (pilihan == 2)
    {
        cout << "\n===== PENGHITUNG TOTAL HARGA SETELAH DISCOUNT =====\n";
        cout << "\nHarga Barang : ";
        cin >> harga;

        if (harga >= 100000 && harga <= 199900)
        {
            cout << "\nTotal Payment :" << (harga - harga * 10 / 100) << "\n";
        }
        else if (harga >= 200000 && harga <= 299900)
        {
            cout << "\nTotal Payment :" << (harga - harga * 20 / 200) << "\n";
        }
        else if (harga >= 300000 && harga <= 399900)
        {
            cout << "\nTotal Payment :" << (harga - harga * 25 / 250) << "\n";
        }
        else
        {
            cout << "\nMaaf harga tersebut tidak mendapatkan discount";
        }
    }
}