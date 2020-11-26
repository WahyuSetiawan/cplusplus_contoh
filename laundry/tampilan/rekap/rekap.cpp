#include "./rekap.h"

#include <stdlib.h>
#include <iostream>
#include <iomanip>

#include "./../component.h"
#include "./../../global/function.h"

int tampilanRekap()
{
    system("clear");

    tampilTitle("DAFTAR REKAP DARI TRANSAKSI LAUNDRY");

    cout << "Daftar dari transaksi : " << endl
         << endl;

    for (int indexTransaksi = 0; indexTransaksi < getDataTransaksi().size(); indexTransaksi++)
    {
        cout << setw(2) << right << indexTransaksi << ". " << getDataTransaksi().at(indexTransaksi).noTransaksi << " - " << getDataTransaksi().at(indexTransaksi).nama << endl;
    }

    cout << endl
         << "Aksi :" << endl
         << "1. Tampilkan detail transaksi" << endl
         << "2. exit" << endl
         << endl;

    int menu = -1;

    cin >> menu;

    switch (menu)
    {
    case 2:
        return 0;
        break;
    }

    return tampilanRekap();
}
