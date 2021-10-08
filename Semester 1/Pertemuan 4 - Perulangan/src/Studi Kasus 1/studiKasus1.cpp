#include <iostream>
using namespace std;

int main()
{
    //* ========== Switch case using integer (Menggunakan Angka) ==========

    /*     int days;
    cout << "1. Senin\n";
    cout << "2. Selasa\n";
    cout << "3. Rabu\n";
    cout << "4. Kamis\n";
    cout << "5. Jumat\n";
    cout << "6. Sabtu\n";
    cout << "7. Minggu\n\n";

    cout << "Pilih Hari Menggunakan Angka : ";
    cin >> days;

    switch (days)
    {
    case 1:
        cout << "\nSelasa & Rabu - Peringatan masuk jam 07:00\n";
        break;
    case 2:
        cout << "\nRabu & Kamis - Peringatan masuk jam 07:00\n";
        break;
    case 3:
        cout << "\nKamis & Jumat - Peringatan masuk jam 07:00\n";
        break;
    case 4:
        cout << "\nJumat & Sabtu - Peringatan masuk jam 07:00\n";
        break;
    case 5:
        cout << "\nSabtu & Minggu - LANJUTKAN TIDUR MU!!!\n";
        break;
    case 6:
        cout << "\nMinggu & Senin - Peringatan masuk jam 07:00\n";
        break;
    case 7:
        cout << "\nSenin & Selasa - Peringatan masuk jam 07:00\n";
        break;
    default:
        cout << "\nError : HARI TIDAK TERSEDIA!!!\n";
        break;
    } */

    //* ========== If else if (Menggunakan nama hari) ==========

    string days;

    cout << "1. Senin \n";
    cout << "2. Selasa \n";
    cout << "3. Rabu \n";
    cout << "4. Kamis \n";
    cout << "5. Jumat \n";
    cout << "6. Sabtu \n";
    cout << "7. Minggu \n\n";

    cout << "Pilih Hari Sesuai Nama : ";
    cin >> days;

    if (days == "Senin")
    {
        cout << "\n===== Selasa & Rabu - Peringatan masuk jam 07:00 =====";
    }
    else if (days == "Selasa")
    {
        cout << "\n===== Rabu & Kamis - Peringatan masuk jam 07:00 =====";
    }
    else if (days == "Rabu")
    {
        cout << "\n===== Kamis & Jumat - Peringatan masuk jam 07:00 =====";
    }
    else if (days == "Kamis")
    {
        cout << "\n===== Jumat & Sabtu - Peringatan masuk jam 07:00 =====";
    }
    else if (days == "Jumat")
    {
        cout << "\n===== Sabtu & Minggu - Tetap lanjutkan tidurmu =====";
    }
    else if (days == "Sabtu")
    {
        cout << "\n===== Minggu & Senin - Peringatan masuk jam 07:00 =====";
    }
    else if (days == "Minggu")
    {
        cout << "\n===== Senin & Selasa - Peringatan masuk jam 07:00 =====";
    }
    else
    {
        cout << "Error : Pastikan nama hari yang anda inputkan sudah benar!!";
    }
}