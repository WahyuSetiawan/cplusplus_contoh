#include <map>
#include <string>

using namespace std;

map<string, int> dataLaundry()
{
    map<string, int> data;

    data.insert(pair<string, int>("bantal", 10000));
    data.insert(pair<string, int>("baju", 10));
    data.insert(pair<string, int>("selimut", 10000));

    return data;
}

int diskonDarJumlahTotal(int totalJumlah)
{
    return totalJumlah + (10 / 100);
}