#include <stdlib.h>
#include <iostream>

using namespace std;

int tampilkanMenu()
{
    system("clear");

    int pilihanMenu = 0;

    cout << "Ini merupakan suatu contoh aplikasi untuk perhitungan laundry" << endl
         << endl
         << endl;
    cout << "MENU : " << endl
         << endl;
    cout << "1. Tampilkan daftar dari jumlah harga pakaian" << endl
         << "2. Menambahkan pembelian dari laundry" << endl
         << "2. Menghitung jumlah dari total laundry" << endl
         << "3. Menampilkan Transaksi Sebelumnya" << endl
         << endl;
    cout << "Pilihlah nomor dari menu yang akan kamu pilih (enter untuk tidak memilih): " << endl;
    cin >> pilihanMenu;

    return pilihanMenu;
}

int tampilanMenuBiaya()
{
    system("clear");

    int menu = 0;

    cout << "DAFTAR HARGA CUCIAN YANG DITERAPKAN" << endl;

    cout << "----------------------------------------------" << endl;
    cout << "Jenis Cucian"
         << "\t\t"
         << "Satuan"
         << "\t"
         << "Harga" << endl;
    cout << "----------------------------------------------" << endl;

    hargaCucian *data = dataLaundry();

    for (int i = 0; i < sizeof(data); i++)
    {
        cout << i + 1 << ". " << data[i].jenisCucian << "\t\t" << data[i].satuan << "\t" << data[i].harga << endl;
    }

    cout << endl;
    cout << "Pilih menu lanjutan : " << endl
         << endl;
    cout << "0. Ke menu utama" << endl;
    cout << "1. Exit" << endl
         << endl;
    cout << "Pilihlah menu yang ingin kamu tuju : " << endl;

    cin >> menu;

    return menu;
}

int tampilanTambahTransaksi()
{
    system("clear");

    struct transaksiCucian transaksiCucianSementara;

    cout << "TAMPILAN UNTUK MENAMBAHKAN TRANSAKSI UNTUK LAUNDRY"
         << endl
         << "Masukan nama : "
         << endl;

    cin >> transaksiCucianSementara.nama;

    cout << "Masukan tanggal sekarang : "
         << endl;

    cin >> transaksiCucianSementara.tanggal;

    cout << "Nasukan no transaksi "
         << endl;

    cin >> transaksiCucianSementara.noTransaksi;

    cout << "Apakah anda yakin dengan data yang dimasukan ? "
         << endl;

    string jawab;

    cin >> jawab;

    if (jawab == "y")
    {
        system("clear");
        cout << "Data yang dimasukan berupa"
             << endl
             << "No Transaksi" << transaksiCucianSementara.noTransaksi << endl
             << "Nama : " << transaksiCucianSementara.nama << endl
             << "tanggal : " << transaksiCucianSementara.tanggal << endl;
        cin >> jawab;

        return 0;
    }
    else
    {
        return 0;
    }
}