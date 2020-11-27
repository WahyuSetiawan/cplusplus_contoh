#include "./component.h"

#include "iostream"
#include "vector"
#include "iomanip"
#include "algorithm"

#include "./../global/function.h"

void viewTitle(string title)
{
     cout << setw(74) << setfill('-') << "" << endl
          << setfill(' ');
     cout << title
          << endl;
     cout << setw(74) << setfill('-') << "" << endl
          << setfill(' ') << endl
          << "\n";
}

// struct compare
// {
//      int key;

//      compare(int const &i) :key(i){}

//      bool operator() (int const &i)
//      {
//           return ();
//      }
// }

void viewDaftarTransaksiBelumDiambil()
{
     cout << "Daftar transaksi (" << getDataTransaksi().size() << ")" << endl;

     // vector<transaksiCucian>::iterator tCucian = find(getDataTransaksi().begin(), getDataTransaksi().end(), [](transaksiCucian tC) {
     //      return tC.diambil == false;
     // });

     for (int indexTransaksi = 0; indexTransaksi < getDataTransaksi().size(); indexTransaksi++)
     {
          cout << indexTransaksi + 1 << ". " << getDataTransaksi().at(indexTransaksi).noTransaksi << " [" << getDataTransaksi().at(indexTransaksi).nama << "]" << endl;
     }

     cout << endl;
}

void viewDaftarTransaksiTelahDiambil()
{
}