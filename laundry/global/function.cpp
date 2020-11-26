#include <vector>
#include "./function.h"

vector<transaksiCucian> kumpulanTransaksiCucian;

hargaCucian *dataLaundry()
{
    static hargaCucian daftarCucian[10] = {};

    daftarCucian[0] = hargaCucian{1, "bantal", 10000, "biji"};
    daftarCucian[1] = hargaCucian{2, "bantal", 10000, "bantal"};
    daftarCucian[2] = hargaCucian{3, "bantal", 10000, "bantal"};
    daftarCucian[3] = hargaCucian{4, "bantal", 10000, "bantal"};
    daftarCucian[4] = hargaCucian{5, "bantal", 10000, "bantal"};
    daftarCucian[5] = hargaCucian{6, "bantal", 10000, "bantal"};
    daftarCucian[6] = hargaCucian{7, "bantal", 10000, "bantal"};
    daftarCucian[7] = hargaCucian{8, "bantal", 10000, "bantal"};
    daftarCucian[8] = hargaCucian{9, "bantal", 10000, "bantal"};
    daftarCucian[9] = hargaCucian{10, "bantal", 10000, "bantal"};

    return daftarCucian;
}

int diskonDarJumlahTotal(int totalJumlah)
{
    return totalJumlah + (10 / 100);
}

int menambahkanTransaksiCucian(transaksiCucian tCucian)
{
    kumpulanTransaksiCucian.push_back(tCucian);

    return 0;
}