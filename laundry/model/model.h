#ifndef MODEL_H

#define MODEL_H

#include <string>
#include <array>
#include <vector>

using namespace std;

struct transaksiDetailCucian
{
    int jenisCucian;
    int jumlahCucian;
};

struct transaksiCucian
{
    string nama;
    string tanggal;
    string noTransaksi;
    bool diambil;
    vector<transaksiDetailCucian> detailCucian;
    int total;
    int diskon;
};

struct hargaCucian
{
    int idHargaCucian;
    string jenisCucian;
    int harga;
    string satuan;
};

#endif
