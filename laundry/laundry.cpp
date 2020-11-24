#include <iostream>
#include <stdlib.h>
#include "./function.h"
#include "./tampilan.h"

using namespace std;

int tampilkanMenu();

int main()
{

    while (int tampilanMenu = tampilkanMenu() != 0)
    {

        switch (tampilanMenu)
        {
        case 1:
            while (int kembalianMenuBiaya = tampilanMenuBiaya() != 0)
            {
                cout << kembalianMenuBiaya;
            }

            break;

        default:
            return 0;
            break;
        }
    }
    return 0;
}
