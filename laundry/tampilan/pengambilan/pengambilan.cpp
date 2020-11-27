#include "pengambilan.h"

#include <stdlib.h>
#include <iomanip>
#include <iostream>

#include "./../component.h"
#include "./../../global/function.h"

int viewPengambilan()
{
    system("clear");

    tampilTitle("TRANSAKSI PENGAMBILAN LAUNDRY");

    int menu = -1;

    cout << "Daftar transaksi yang belum diambil : " << endl
         << endl;

    for (transaksiCucian tCucian : getDataTransaksi())
    {
        cout << tCucian.nama << endl;
    }

    cin >> menu;

    if (menu < 0)
    {
        return 0;
    }

    return viewPengambilan();
}