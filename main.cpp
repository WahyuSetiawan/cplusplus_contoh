#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int banyaknyaMasukan = 10;
    int masukan[10] = {};

    for (int i = 0; i < banyaknyaMasukan; i++)
    {
        cin >> masukan[i];
    }

    for (int tampilanData = 0; tampilanData < banyaknyaMasukan; tampilanData++)
    {
        cout << masukan[tampilanData];
    }

    return 0;
}