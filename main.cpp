#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int banyaknyaMasukan = 10;
    int masukan[10] = {};

    for (int i = 0; i < banyaknyaMasukan; i++)
    {
        cout << "berikan masukan pada " << i + 1 << " : ";
        cin >> masukan[i];
        cout << "\n";
    }

    for (int tampilanData = 0; tampilanData < banyaknyaMasukan; tampilanData++)
    {
        cout << "masukan " << tampilanData + 1 << masukan[tampilanData] << "\n";
    }

    return 0;
}