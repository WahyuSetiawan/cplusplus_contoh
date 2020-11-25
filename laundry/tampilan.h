#include <stdlib.h>
#include <iostream>

using namespace std;

void tampilanDetail(transaksiCucian transaksiCucian);
int tampilanInputanDetail(transaksiCucian transaksiCucian);
int tampilanInputanDetailForm(transaksiCucian transaksiCucian);

void tampilTitle(string title)
{

    cout << "--------------------------------------------------------------------" << endl
         << endl
         << title
         << endl
         << "--------------------------------------------------------------------" << endl
         << endl;
}

int tampilkanMenu()
{
    system("clear");

    int pilihanMenu = 0;

    tampilTitle("SIMULASI PERHITUNGAN DI LAUNDRY");

    cout << "MENU : " << endl
         << endl;
    cout << "1. Tampilkan daftar dari jumlah harga pakaian" << endl
         << "2. Menambahkan pembelian dari laundry" << endl
         << "3. Menghitung jumlah dari total laundry" << endl
         << "4. Menampilkan Transaksi Sebelumnya" << endl
         << endl;
    cout << "Pilihlah nomor dari menu yang akan kamu pilih (enter untuk tidak memilih): " << endl;
    cin >> pilihanMenu;

    return pilihanMenu;
}

int tampilanMenuBiaya()
{
    system("clear");

    int menu = 0;

    tampilTitle("DAFTAR HARGA CUCIAN YANG DITERAPKAN");

    cout << "----------------------------------------------------------" << endl;
    cout << "| Jenis Cucian"
         << "\t\t"
         << "| Satuan"
         << "\t"
         << "| Harga" << endl;
    cout << "----------------------------------------------------------" << endl;

    hargaCucian *data = dataLaundry();

    for (int i = 0; i < sizeof(data); i++)
    {
        cout << "| " << i + 1
             << ". "
             << data[i].jenisCucian
             << "\t\t| "
             << data[i].satuan
             << "\t| "
             << data[i].harga << endl;
    }

    cout << endl;
    cout << "Pilih menu lanjutan : " << endl
         << endl;
    cout << "0. Ke menu utama" << endl;
    cout << "1. Exit" << endl
         << endl;
    cout << "Pilihlah menu yang ingin kamu tuju : " << endl;

    cin >> menu;

    return menu;
}

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

        cin >> jawab;

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

void tampilanDetail(transaksiCucian transaksiCucian)
{
    cout << ""
         << "No Transaksi \t: " << transaksiCucian.noTransaksi << endl
         << "Nama \t\t: " << transaksiCucian.nama << endl
         << "Tanggal \t: " << transaksiCucian.tanggal << endl
         << endl
         << "Apakah anda ingin lanjutkan penginputan tentang detail Transaksi ?";
    ;
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

    cout << "masukan data pertama";

    cout << "jenis barang";
    cin >> menu;

    return menu;
}