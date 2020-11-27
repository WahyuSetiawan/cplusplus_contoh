#include "pengambilan.h"

#include <stdlib.h>
#include <iomanip>
#include <iostream>

#include "./../component.h"
#include "./../../global/function.h"

int viewPengambilan()
{
    system("clear");

    viewTitle("TRANSAKSI PENGAMBILAN LAUNDRY");

    int menu = -1;

    cout << "Daftar transaksi yang belum diambil : " << endl
         << endl;

    for (transaksiCucian tCucian : getDataTransaksi())
    {
        cout << tCucian.nama << endl;
    }

    viewDaftarTransaksiBelumDiambil();

    cout << endl
         << "Aksi : " << endl;
    cout << "1. Transaksi pengambilan" << endl;
    cout << "2. exit" << endl;

    cin >> menu;

    if (menu < 0 || menu == 2)
    {
        return 0;
    }
    else if (menu == 1)
    {
    }

    return viewPengambilan();
}