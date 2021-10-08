#include <iostream>
using namespace std;

int main()
{
    //! Input menggunakan String == Masih error ==
    /*     string Status;
    string Gender;
    string StatusPerempuan[3] = {"Perempuan belum menikah", "Perempuan sudah menikah", "Istri mempunyai anak"};
    string StatusLakiLaki[3] = {"Laki laki belum menikah",
                                "Laki laki sudah menikah",
                                "Suami mempunyai anak"};

    cout << "\nLaki laki\n";
    cout << "Perempuan\n";
    cout << "\nPilih Gender anda : ";
    cin >> Gender;

    if (Gender.find("Laki laki"))
    {
        cout << "\nLaki laki belum menikah\n";
        cout << "Laki laki sudah menikah\n";
        cout << "Suami mempunyai anak\n";
        cout << "\nPilih Status anda : ";
        cin >> Status;

        if (Status.find("Laki laki belum menikah"))
        {
            cout << "\n=== Single ===";
        }
        else if (Status.find("Laki laki sudah menikah"))
        {
            cout << "\n=== Seorang Suami ===";
        }
        else if (Status.find("Suami mempunyai anak"))
        {
            cout << "\n=== Seorang Bapak ===";
        }
        else
        {
            "\n Error : Status yang anda inputkan tidak valid";
        }
    }
    else if (Gender == "Perempuan")
    {
        cout << "\nPerempuan belum menikah\n";
        cout << "Perempuan sudah menikah\n";
        cout << "Istri mempunyai anak\n";
        cout << "\nPilih Status anda : ";
        cin >> Status;

        if (Status.find(StatusPerempuan[0]))
        {
            cout << "\n=== Single ===";
        }
        else if (Status.find(StatusPerempuan[1]))
        {
            cout << "\n=== Seorang Istri ===";
        }
        else if (Status.find(StatusPerempuan[2]))
        {
            cout << "\n=== Seorang Ibu ===";
        }
        else
        {
            "Error : Status yang anda inputkan tidak valid";
        }
    }
    else
    {
        cout << "Error : Gender yang anda inputkan tidak valid";
    } */

    //* Input menggunakan Angka / integer input
    int Status;
    int Gender;

    cout << "\n1. Laki laki\n";
    cout << "2. Perempuan\n";
    cout << "\nPilih Gender anda Menggunakan angka : ";
    cin >> Gender;

    if (Gender == 1)
    {
        cout << "\n1. Belum Menikah\n";
        cout << "2. Sudah Menikah\n";
        cout << "3. Mempunyai anak\n";
        cout << "\nPilih status anda menggunakan angka : ";
        cin >> Status;

        if (Status == 1)
        {
            cout << "\n=== Single ===\n";
        }
        else if (Status == 2)
        {
            cout << "\n=== Suami ===\n";
        }
        else if (Status == 3)
        {
            cout << "\n=== Bapak ===\n";
        }
        else
        {
            cout << "Error : Status yang anda inputkan tidak valid\n";
        }
    }
    else if (Gender == 2)
    {
        cout << "\n1. Belum Menikah\n";
        cout << "2. Sudah Menikah\n";
        cout << "3. Mempunyai anak\n";
        cout << "\nPilih status anda menggunakan angka : ";
        cin >> Status;

        if (Status == 1)
        {
            cout << "\n=== Single ===\n";
        }
        else if (Status == 2)
        {
            cout << "\n=== Istri ===\n";
        }
        else if (Status == 3)
        {
            cout << "\n=== Ibu ===\n";
        }
        else
        {
            cout << "Error : Status yang anda inputkan tidak valid\n";
        }
    }
    else
    {
        cout << "\nError : Gender yang anda inputkan tidak valid";
    }
}