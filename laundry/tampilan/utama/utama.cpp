#include "utama.h"

#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include "./../component.h"
#include "./../harga/harga.h"
#include "./../transaksi/transaksi.h"
#include "./../rekap/rekap.h"
#include "./../pengambilan/pengambilan.h"

int tampilkanMenu();

int tampilanMain()
{
    while (true)
    {
        int tampilanMenu = tampilkanMenu();
        switch (tampilanMenu)
        {
        case 1:

            while (true)
            {
                int kembalianMenuBiaya = tampilanMenuBiaya();
                switch (kembalianMenuBiaya)
                {
                case 1:
                    return 0;
                    continue;
                default:
                    break;
                }
                break;
            }
            continue;
        case 2:
            tampilanTambahTransaksi();
            continue;
        case 3:
            viewPengambilan();
            continue;
        case 4:
            tampilanRekap();
            continue;
        default:
            return 0;
            break;
        }

        break;
    }

    return 0;
}

int tampilkanMenu()
{
    system("clear");

    int pilihanMenu = 0;

    viewTitle("SIMULASI PERHITUNGAN DI LAUNDRY");

    cout << "MENU : " << endl
         << endl;
    cout << "1. Harga Laundry" << endl
         << "2. Transaksi Masuk" << endl
         << "3. Transaksi Pengambilan" << endl
         << "4. Laporan" << endl
         << endl;
    cout << "Pilihlah nomor dari menu yang akan kamu pilih (enter untuk tidak memilih): " << endl;
    cin >> pilihanMenu;

    return pilihanMenu;
}
