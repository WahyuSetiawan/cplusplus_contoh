#include <iostream>
#include <iomanip>
#include <stdlib.h>

#include "./../../global/function.h"

#include "./../component.h"

int tampilanMenuBiaya()
{
     system("clear");

     int menu = 0;

     viewTitle("DAFTAR HARGA CUCIAN YANG DITERAPKAN");

     cout << setw(74) << setfill('-') << " " << setfill(' ') << endl;

     cout << "|" << setw(5) << " No. "
          << "|" << setw(74 - 5 - 20 - 5) << left << " Jenis Cucian"
          << "|" << setw(10) << " Satuan"
          << "|" << setw(10) << " Harga"
          << "|" << endl;
     cout << setw(74) << setfill('-') << " " << setfill(' ') << endl;

     hargaCucian *data = dataLaundry();

     for (int i = 0; i < sizeof(data); i++)
     {
          cout << "|" << setw(5) << right << i + 1
               << "|" << setw(74 - 5 - 20 - 5) << left << data[i].jenisCucian
               << "|" << setw(10) << data[i].satuan
               << "|" << setw(10) << data[i].harga
               << "|" << endl;
     }

     cout << setw(74) << setfill('-') << " " << setfill(' ') << endl;

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