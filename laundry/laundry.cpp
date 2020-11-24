#include <iostream>
#include <stdlib.h>
#include "./function.h"
#include "./menu_biaya.h"

using namespace std;

int tampilkanMenu();

int main()
{
    int *menu = 0;
    while (true)
    {
        system("clear");

        switch (tampilkanMenu())
        {
        case 1:
            while (int tampilanMenu = tampilanMenuBiaya() == 0)
            {
                cout << tampilanMenu;
            }

            break;

        default:
            return 0;
            break;
        }
    }

    // cout << "hasil dari header : " << diskonDarJumlahTotal(10);

    return 0;
}

int tampilkanMenu()
{
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