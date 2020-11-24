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
