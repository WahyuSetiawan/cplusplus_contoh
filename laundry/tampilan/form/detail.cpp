#include <iostream>
#include <stdlib.h>
#include "./detail.h"

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
