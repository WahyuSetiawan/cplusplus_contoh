#include <iostream>
#include <stdlib.h>

#include "./global/function.h"
#include "./tampilan/tampilan.h"

using namespace std;

int main()
{
    while (true)
    {
        int tampilanMenu = tampilkanMenu();
        switch (tampilanMenu)
        {
        case 1:

            while (true)
            {
                int kembalianMenuBiaya = tampilanMenuBiaya();
                switch (kembalianMenuBiaya)
                {
                case 1:
                    return 0;
                    continue;
                default:
                    break;
                }
                break;
            }

            continue;

        case 2:

            while (true)
            {
                int kembalianMenuBiaya = tampilanTambahTransaksi();
                switch (kembalianMenuBiaya)
                {
                case 1:
                    return 0;
                    continue;
                default:
                    break;
                }
                break;
            }

            continue;

        default:
            return 0;
            break;
        }

        break;
    }
    return 0;
}
