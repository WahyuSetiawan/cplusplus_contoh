#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int nilai;
    int terkecil = nilai;

    char pass[4];

    cout << "=======UTS ALPROG=========" << endl;
    cout << "NAMA  \t\t: DWIYONI WAHYU SEPTIARKO" << endl;
    cout << "KELAS \t\t: INFORMATIKA 03" << endl;
    cout << "NIM   \t\t: 20.11.3457 (GANJIL)" << endl;

    cout << "Banyak Input Nilai = ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cout << "Input nilai ke-" << i << " = ";
        cin >> nilai;

        if (nilai % 2 == 0)
        {
            cout << "nilai genap" << endl;
        }
        else
        {
            cout << "nilai ganjil" << endl;
        }

        if (nilai == 21)
        {
            cout << "password = ";
            cin >> pass;

            cout << "Nilai dari pass : " << pass << endl;

            // if (pass == "aku")
            //     cout << "anda memasuki wilayah rahasia" << endl;
            // else
            //     cout << "tidak jadi masuk daerah rahasia " << endl;
        }

        // if (nilai < terkecil)
        // {
        //     terkecil = nilai;
        // }
    }

    cout << "Bilangan terkecil = " << terkecil;

    return 0;
}