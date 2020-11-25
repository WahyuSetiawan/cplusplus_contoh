#include "./transaksi.h"

#include "iostream"
#include "iomanip"

#include "./component.h"

int tampilanInputanDetail(transaksiCucian transaksiCucian);
int tampilanInputanDetailForm(transaksiCucian transaksiCucian);
void tampilanDetail(transaksiCucian transaksiCucian);
void tampilanDaftarCucian(transaksiCucian transaksiCucian);

int tampilanTambahTransaksi()
{
    system("clear");

    struct transaksiCucian transaksiCucianSementara;

    tampilTitle("TAMPILAN UNTUK MENAMBAHKAN TRANSAKSI UNTUK LAUNDRY");

    cout << "Masukan nama \t\t: ";
    cin >> transaksiCucianSementara.nama;

    cout << "Masukan tanggal \t: ";
    cin >> transaksiCucianSementara.tanggal;

    cout << "Nasukan no transaksi \t: ";
    cin >> transaksiCucianSementara.noTransaksi;

    cout << "Apakah anda yakin dengan data yang dimasukan ? ";

    string jawab;

    cin >> jawab;

    if (jawab == "y")
    {
        system("clear");

        tampilTitle("HASIL DARI DATA TRANSAKSI YANG DIMASUKAN DI AWAL");
        tampilanDetail(transaksiCucianSementara);

        cout << "Apakah anda ingin lanjutkan penginputan tentang detail Transaksi ?";

        cin >>
            jawab;

        if (jawab == "y")
        {
            // menambahkanTransaksiCucian(transaksiCucianSementara);

            return tampilanInputanDetail(transaksiCucianSementara);
        }

        return 0;
    }
    else
    {
        return 0;
    }
}

int tampilanInputanDetail(transaksiCucian transaksiCucian)
{
    while (true)
    {
        int menu = tampilanInputanDetailForm(transaksiCucian);

        switch (menu)
        {
        case 1:
            return 0;
            continue;
        default:
            break;
        }
        break;
    }

    return 0;
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

    cout << setw(75) << setfill('-')
         << "\n"
         << setfill(' ')
         << setw(2) << left << "|" << setw(3) << left << "No"
         << setw(2) << left << "|" << setw(30) << left << "Cucian"
         << setw(2) << left << "|" << setw(10) << left << "Jumlah"
         << setw(2) << left << "|" << setw(10) << left << "Satuan"
         << setw(2) << left << "|" << setw(10) << left << "Subtotal"
         << setw(2) << left << "|";

    cout << setw(75) << setfill('-') << "\n"
         << setfill(' ') << endl;

    if (transaksiCucian.detailCucian.size() == 0)
    {
        cout << setw(2) << "|" << setw(75 - 4) << "Tidak ada data detail cucian" << setw(2) << "|";
    }

    cout << setw(75) << setfill('-') << "\n"
         << setfill(' ') << endl;

    cout << setw(2) << left << "|"
         << setw(75 - 2 - 2 - 2 - 10) << "Total"
         << setw(2) << left << "|"
         << setw(10) << right << 100000
         << setw(2) << left << "|";

    cout << setw(75) << setfill('-') << "\n"
         << setfill(' ') << endl;
}
