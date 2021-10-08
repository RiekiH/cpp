#include <iostream>
using namespace std;

int main()
{
    int nilaiUTS, nilaiTugas, nilaiUAS, sum;
    float average;

    cout << "\n===== RATA RATA RAPORT =====\n";
    cout << "\nInputkan Nilai Tugas : ";
    cin >> nilaiTugas;
    cout << "\nInputkan Nilai UTS : ";
    cin >> nilaiUTS;
    cout << "\nInputkan Nilai UAS : ";
    cin >> nilaiUAS;

    average = (nilaiTugas + nilaiUTS + nilaiUAS) / 3;

    if (average <= 65)
    {
        cout << "\nD - Tidak lulus";
    }
    else if (average >= 66 && average <= 75)
    {
        cout << "\nC - Lulus bersyarat";
    }
    else if (average >= 76 && average <= 85)
    {
        cout << "\nB - Lulus";
    }
    else if (average >= 86 && average <= 95)
    {
        cout << "\nA - Lulus dengan baik";
    }
    else if (average >= 96 && average <= 100)
    {
        cout << "\nA+ - Lulus dengan pujian";
    }
    else
    {
        cout << "\nError: Inputan tidak valid";
    }
}