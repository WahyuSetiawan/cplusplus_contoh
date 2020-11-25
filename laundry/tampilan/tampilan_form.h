#ifndef Included_tampilan_form_h

#define Included_tampilan_form_h

#include <iostream>
#include <stdlib.h>

using namespace std;

transaksiDetailCucian tampilanTambahDetailCucian()
{
    struct transaksiDetailCucian tDetailCucian;

    cout << "Tambahkan data dari update detail cucian : ";

    cout << "Masukan ID cucian : ";
    cin >> tDetailCucian.jenisCucian;

    cout << "\n";
    cout << "Masukan Jumlah masukan ";
    cin >> tDetailCucian.jumlahCucian;

    return tDetailCucian;
}

#endif