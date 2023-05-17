#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string barang[10];
    int harga[10];
    int jumlah[10];
    int total = 0;
    int n;

    cout << "Berapa jenis barang yang ingin dibeli? ";
    cin >> n;

    // Membaca nama barang, harga, dan jumlah
    for (int i = 0; i < n; i++)
    {
        cout << "Nama barang ke-" << i+1 << ": ";
        cin >> barang[i];
        cout << "Harga barang: ";
        cin >> harga[i];
        cout << "Jumlah barang: ";
        cin >> jumlah[i];
        cout << endl;

        total += harga[i] * jumlah[i]; // Menghitung total harga
    }

    // Mencetak nota belanja
    cout << "=============================================" << endl;
    cout << "                  NOTA BELANJA                " << endl;
    cout << "=============================================" << endl;
    cout << setw(20) << left << "Nama Barang"
         << setw(10) << right << "Harga"
         << setw(10) << right << "Jumlah"
         << setw(15) << right << "Total" << endl;
    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << setw(20) << left << barang[i]
             << setw(10) << right << harga[i]
             << setw(10) << right << jumlah[i]
             << setw(15) << right << harga[i] * jumlah[i] << endl;
    }

    cout << "---------------------------------------------" << endl;
    cout << setw(40) << right << "Total Harga: " << setw(15) << right << total << endl;
    cout << "=============================================" << endl;

    return 0;
}
