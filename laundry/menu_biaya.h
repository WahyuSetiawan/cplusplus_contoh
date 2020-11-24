#include <stdlib.h>
#include <iostream>

using namespace std;

int tampilanMenuBiaya()
{
    int menu = 0;

    cout << "----------------------------------------------";
    cout << "----------------------------------------------";

    map<string, int> data = dataLaundry();

    for (map<string, int>::iterator iter = data.begin(); iter != data.end(); ++iter)
    {
        cout << (*iter).first << (*iter).second;
    }

    cin >> menu;

    return menu;
}