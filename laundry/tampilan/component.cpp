#include "./component.h"

#include "iostream"
#include "iomanip"

void tampilTitle(string title)
{
     cout << setw(74) << setfill('-') << "" << endl
          << setfill(' ');
     cout << title
          << endl;
     cout << setw(74) << setfill('-') << "" << endl
          << setfill(' ') << endl
          << "\n";
}
