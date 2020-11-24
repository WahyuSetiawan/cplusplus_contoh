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

    cout << "----------------------------------------------" << endl;
    cout << "Jenis Cucian"
         << "\t"
         << "Harga" << endl;
    cout << "----------------------------------------------" << endl;

    hargaCucian *data = dataLaundry();

    cout << data[1].harga;

    cin >>
        menu;

    return menu;
}