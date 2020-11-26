#include "./transaksi.h"

#include "iostream"
#include "iomanip"

#include "./component.h"
#include "./../global/function.h"

/*

lokasi function initialisasi

*/

int tampilanInputanDetail(transaksiCucian transaksiCucian);
int tampilanInputanDetailForm(transaksiCucian transaksiCucian);

void tampilanDetail(transaksiCucian transaksiCucian);
void tampilanDaftarCucian(transaksiCucian transaksiCucian);

transaksiDetailCucian tampilanFormDetail();
int tampilanHapusDetaiCucian(transaksiCucian transaksiCucian);
int tampilIndexEdit(transaksiCucian tCucian);
bool tampilanKonfirmasiKeluarForm(transaksiCucian tCucian);

/*

implementasi dari function yang ada

*/

int tampilanTambahTransaksi()
{
    system("clear");

    struct transaksiCucian transaksiCucianSementara;

    tampilTitle("TAMPILAN UNTUK MENAMBAHKAN TRANSAKSI UNTUK LAUNDRY");

    cout << setw(25) << left << "Masukan nama "
         << ": ";
    cin >> transaksiCucianSementara.nama;

    cout << setw(25) << left << "Masukan tanggal"
         << ": ";
    cin >> transaksiCucianSementara.tanggal;

    cout << setw(25) << left << "Nasukan no transaksi "
         << ": ";
    cin >> transaksiCucianSementara.noTransaksi;

    cout << "\nApakah anda yakin dengan data yang dimasukan ? ";

    string jawab;

    cin >> jawab;

    if (jawab == "y")
    {
        system("clear");

        return tampilanInputanDetail(transaksiCucianSementara);
    }
    else
    {
        return 0;
    }
}

int tampilanInputanDetail(transaksiCucian transaksiCucian)
{
    struct transaksiCucian transaksiCucianTmp = transaksiCucian;

    while (true)
    {
        int menu = tampilanInputanDetailForm(transaksiCucianTmp);

        switch (menu)
        {
        case 1:
            transaksiCucianTmp.detailCucian.push_back(tampilanFormDetail());
            continue;
        case 2:
            transaksiCucianTmp.detailCucian.at(tampilIndexEdit(transaksiCucianTmp)) =
                tampilanFormDetail();
            continue;
        case 3:
            transaksiCucianTmp.detailCucian.erase(
                transaksiCucianTmp.detailCucian.begin() + tampilanHapusDetaiCucian(transaksiCucianTmp));
            continue;
        case 4:
            return menambahkanTransaksiCucian(transaksiCucianTmp);
            continue;
        case 5:

            if (tampilanKonfirmasiKeluarForm(transaksiCucianTmp))
            {
                return 0;
            }
            continue;
        default:
            break;
        }
        break;
    }

    return 0;
}

bool tampilanKonfirmasiKeluarForm(transaksiCucian tCucian)
{

    if (tCucian.detailCucian.empty())
        return true;

    char hasil = 't';

    cout << endl
         << "Apakah anda ingin keluar dari form ini? ('y' untuk keluar)" << endl;
    cin >> hasil;

    return hasil == 'y';
}

int tampilIndexEdit(transaksiCucian tCucian)
{
    int index = -1;

    while (index < 0)
    {
        while (index < 0)
        {
            cout << endl
                 << setw(20) << "Masukan index yang akan di ubah : ";
            cin >> index;

            if (index - 1 >= tCucian.detailCucian.size())
            {
                cout << "(kesalahan index yang kamu masukan !!!)" << endl;
                index = -1;
            }
        }
    }

    return index - 1;
}

transaksiDetailCucian tampilanFormDetail()
{
    transaksiDetailCucian tCucian;

    cout << endl
         << "Masukan data transaksi detail cucian : " << endl
         << setw(20)
         << "1. Masukan tipe cucian (id tipe cucian) "
         << ": ";

    cin >> tCucian.jenisCucian;

    cout << endl
         << setw(20)
         << "2. Masukan jumlah dari transaksi"
         << ": ";

    cin >> tCucian.jumlahCucian;

    return tCucian;
}

int tampilanInputanDetailForm(transaksiCucian transaksiCucian)
{
    system("clear");
    int menu;

    tampilTitle("MASUKAN DETAIL TRANSAKSI");
    tampilanDetail(transaksiCucian);
    tampilanDaftarCucian(transaksiCucian);

    cout << endl
         << endl
         << "Aksi : " << endl
         << "1. tambahkan" << endl;

    if (transaksiCucian.detailCucian.size() > 0)
    {
        cout << "2. ubah" << endl
             << "3. hapus" << endl
             << "4. simpan" << endl;
    }

    cout << "5. exit" << endl;

    cout << "Tentukan dengan Aksi : ";
    cin >> menu;

    return menu;
}

void tampilanDetail(transaksiCucian transaksiCucian)
{
    cout << ""
         << "No Transaksi \t: " << transaksiCucian.noTransaksi << endl
         << "Nama \t\t: " << transaksiCucian.nama << endl
         << "Tanggal \t: " << transaksiCucian.tanggal << endl
         << endl;
}

void tampilanDaftarCucian(transaksiCucian transaksiCucian)
{
    cout << "Tampilan dari daftar cucian (" << transaksiCucian.detailCucian.size() << ")" << endl;

    cout << setw(74) << setfill('-') << "" << endl
         << setfill(' ')
         << setw(2) << left << "|" << setw(3) << left << "No"
         << setw(2) << left << "|" << setw(30) << left << "Cucian"
         << setw(2) << left << "|" << setw(10) << left << "Jumlah"
         << setw(2) << left << "|" << setw(10) << left << "Satuan"
         << setw(2) << left << "|" << setw(10) << left << "Subtotal"
         << setw(2) << left << "|" << endl;

    cout << setw(74) << setfill('-') << "" << endl
         << setfill(' ');

    int total = 0;

    if (transaksiCucian.detailCucian.size() == 0)
    {
        cout << setw(2) << "|" << setw(75 - 4) << "Tidak ada data detail cucian" << setw(2) << "|" << endl;
    }
    else
    {
        for (int i = 0; i < transaksiCucian.detailCucian.size(); i++)
        {
            struct transaksiDetailCucian tDetailCucian = transaksiCucian.detailCucian.at(i);
            struct hargaCucian *tHargaCucian;

            for (int indexDetail = 0; indexDetail < sizeof(dataLaundry()); indexDetail++)
            {
                if (dataLaundry()[indexDetail].idHargaCucian == tDetailCucian.jenisCucian)
                {
                    tHargaCucian = &dataLaundry()[indexDetail];
                }
            }

            if (tHargaCucian)
            {
                total += tDetailCucian.jumlahCucian * tHargaCucian->harga;

                cout << setw(2) << left << "|" << setw(3) << left << i + 1
                     << setw(2) << left << "|" << setw(30) << left << tHargaCucian->jenisCucian
                     << setw(2) << left << "|" << setw(10) << left << tDetailCucian.jumlahCucian
                     << setw(2) << left << "|" << setw(10) << left << tHargaCucian->satuan
                     << setw(2) << left << "|" << setw(10) << right << tDetailCucian.jumlahCucian * tHargaCucian->harga
                     << setw(2) << left << "|" << endl;
            }
        }
    }

    cout << setw(74) << setfill('-') << "" << endl
         << setfill(' ');

    cout << setw(2) << left << "|"
         << setw(75 - 2 - 2 - 2 - 10) << "Total"
         << setw(2) << left << "|"
         << setw(10) << right << total
         << setw(2) << left << "|" << endl;

    cout << setw(74) << setfill('-') << "" << endl
         << setfill(' ') << endl;
}

int tampilanHapusDetaiCucian(transaksiCucian transaksiCucian)
{
    int index = -1;

    while (index < 0)
    {
        cout << endl
             << setw(20) << "Masukan index yang akan di hapus : ";
        cin >> index;

        if (index - 1 >= transaksiCucian.detailCucian.size())
        {
            cout << "(kesalahan index yang kamu masukan !!!)" << endl;
            index = -1;
        }
    }

    return index - 1;
}