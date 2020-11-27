#ifndef Included_function_h

#define Included_function_h

#include "./../model/model.h"

#include "vector"

using namespace std;

hargaCucian *dataLaundry();
int diskonDarJumlahTotal(int totalJumlah);
int menambahkanTransaksiCucian(transaksiCucian tCucian);
vector<transaksiCucian> getDataTransaksi();
int pengembalianLaundry(transaksiCucian tCucian);

#endif