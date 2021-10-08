/* 
Catatan:
Variable ini merupakan konsep paling penting di C++ 
Didalam cpp ini kita tidak dapat langsung, a = 1; Kita harus mendeklarasikan tipe data agar komputer mendapat kejelasan. Jika kita tidak mendeklarasikan tipe data komputer belaik: "a itu apa woyy?", Tidak manusia saja yang butuh kejelasan, komputer juga butuh kejelasan :) 


*/

#include <iostream>

using namespace std; //* Jika kita menggunakan ini, kita tidak perlu menuliskan lagi kata std::

int main()
{
    //! Bab Variable

    /*  int i = 20;
    std::cout << i << std::endl;
    return 0; */

    //! Bab Deklarasi dan Cin

    int a;
    a = 100;

    cout << a << endl; //* Contoh sebelum menggunakan "using namespace std" -> std::cout << a << std::endl

    /*     int tahunLahir, tahunSekarang;
    tahunSekarang = 2021;
    cout << "========== Aplikasi menghitung umur ==========\n";
    cout << "Tahun berapa anda lahir : ";
    cin >> tahunLahir;
    cout << "Umur anda sekarang adalah : " << tahunSekarang - tahunLahir << endl; */

    string nama_awal, nama_akhir, alamat, jabatan;
    int id;
    cout << "===================================\n";
    cout << "          (BIODATA KASIR)\n";
    cout << "===================================\n";

    cout << "ID : ";
    cin >> id;

    cout << "Nama awal : ";
    cin >> nama_awal;

    cout << "Nama akhir : ";
    cin >> nama_akhir;

    cout << "Alamat : ";
    cin >> alamat;

    cout << "Jabatan : ";
    cin >> jabatan;

    cout << "===================================\n";
    cout << "          (BIODATA KASIR)\n";
    cout << "===================================\n";

    cout << "ID : " << id << endl;
    cout << "Nama : " << nama_awal + " " + nama_akhir << endl;
    cout << "Alamat : " << alamat << endl;
    cout << "Jabatan : " << jabatan << endl;

    return 0;
}