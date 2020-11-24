#include <stdlib.h>
#include <iostream>

using namespace std;

int tampilkanMenu()
{
    system("clear");

    int pilihanMenu = 0;

    cout << "Ini merupakan suatu contoh aplikasi untuk perhitungan laundry" << endl;
    cout << endl;
    cout << endl;
    cout << "MENU : " << endl;
    cout << endl;
    cout << "1. Tampilkan daftar dari jumlah harga pakaian" << endl;
    cout << "2. Menghitung jumlah dari total laundry" << endl;
    cout << "3. Menampilkan Transaksi Sebelumnya" << endl;
    cout << endl;
    cout << "Pilihlah nomor dari menu yang akan kamu pilih (enter untuk tidak memilih): " << endl;
    cin >> pilihanMenu;
    cin.ignore(100, '\n');

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
    cout << "Pilih menu lanjutan : " << endl;
    cout << endl;
    cout << "0. Ke menu utama" << endl;
    cout << "1. Exit" << endl;
    cout << endl;
    cout << "Pilihlah menu yang ingin kamu tuju : " << endl;

    cin >> menu;

    return menu;
}