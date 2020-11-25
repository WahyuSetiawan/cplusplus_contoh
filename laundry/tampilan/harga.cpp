#include <iostream>
#include <stdlib.h>

#include "./../global/function.h"
#include "./component.h"

int tampilanMenuBiaya()
{
    system("clear");

    int menu = 0;

    tampilTitle("DAFTAR HARGA CUCIAN YANG DITERAPKAN");

    cout << "----------------------------------------------------------" << endl;
    cout << "| Jenis Cucian"
         << "\t\t"
         << "| Satuan"
         << "\t"
         << "| Harga" << endl;
    cout << "----------------------------------------------------------" << endl;

    hargaCucian *data = dataLaundry();

    for (int i = 0; i < sizeof(data); i++)
    {
        cout << "| " << i + 1
             << ". "
             << data[i].jenisCucian
             << "\t\t| "
             << data[i].satuan
             << "\t| "
             << data[i].harga << endl;
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