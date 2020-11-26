#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int banyaknyaMasukan = 10;
    int masukan[10] = {};

    for (int langkahMasukan = 0; langkahMasukan < banyaknyaMasukan; langkahMasukan++)
    {
        cout << "berikan masukan pada " << langkahMasukan + 1 << " : ";
        cin >> masukan[langkahMasukan];
        cout << "\n";
    }

    for (int tampilanData = 0; tampilanData < banyaknyaMasukan; tampilanData++)
    {
        cout << "masukan " << tampilanData + 1 << masukan[tampilanData] << "\n";
    }

    return 0;
}