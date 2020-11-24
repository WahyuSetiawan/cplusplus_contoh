#include <map>
#include <string>

using namespace std;

struct hargaCucian
{
    string jenisCucian;
    int harga;
    string satuan;
};

hargaCucian *dataLaundry()
{
    static hargaCucian daftarCucian[10] = {};

    daftarCucian[0] = hargaCucian{
        "bantal", 10000, "bantal"};

    daftarCucian[1] = hargaCucian{
        "bantal", 10000, "bantal"};

    daftarCucian[2] = hargaCucian{
        "bantal", 10000, "bantal"};

    daftarCucian[3] = hargaCucian{
        "bantal", 10000, "bantal"};

    daftarCucian[4] = hargaCucian{
        "bantal", 10000, "bantal"};

    daftarCucian[5] = hargaCucian{
        "bantal", 10000, "bantal"};

    daftarCucian[6] = hargaCucian{
        "bantal", 10000, "bantal"};

    daftarCucian[7] = hargaCucian{
        "bantal", 10000, "bantal"};

    daftarCucian[8] = hargaCucian{
        "bantal", 10000, "bantal"};

    daftarCucian[9] = hargaCucian{
        "bantal", 10000, "bantal"};

    return daftarCucian;
}

int diskonDarJumlahTotal(int totalJumlah)
{
    return totalJumlah + (10 / 100);
}