#include "./component.h"

#include "iostream"
#include "iomanip"

void tampilTitle(string title)
{
    cout << setw(75) << setfill('-') << "\n"
         << setfill(' ');
    cout << title
         << endl;
    cout << setw(75) << setfill('-') << "\n"
         << setfill(' ')
         << endl
         << "\n";
}
