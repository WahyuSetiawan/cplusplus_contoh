#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    //daftar hari perminggu
    string haris[7] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};

    //daftar niali pasien
    int nilaiPasien[7] = {40, 70, 30, 10, 20, 90, 12};

    //nilai untuk mencari maksimal nilaidi array pasien
    int maximalNilaiPasien = 0;
    int batasanDiagram = 30;

    //mencari nilai tertinggi
    for (int i = 0; i < 7; i++)
    {
        if (maximalNilaiPasien <= nilaiPasien[i])
        {
            maximalNilaiPasien = nilaiPasien[i];
        }
    }

    batasanDiagram += maximalNilaiPasien;

    for (int batasanTinggiDiagram = 0; batasanTinggiDiagram < batasanDiagram / 3; batasanTinggiDiagram++)
    {
        for (int batasanSamping = 0; batasanSamping < 15 * 7; batasanSamping++)
        {
            if (batasanSamping == 0)
            {
                cout << "|" << endl;
            }

            if (batasanTinggiDiagram == batasanDiagram / 3 - 1)
            {
                cout << "-";
            }
        }
    }

    cout << endl;

    for (string hari : haris)
    {
        cout << setw(15) << hari;
    }

    return 0;
}