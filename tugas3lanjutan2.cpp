
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    // Set terminal agar membaca output UTF-8
    SetConsoleOutputCP(CP_UTF8);

    // Deklarasi variabel
    string menu[5] = {"soto", "rawon", "pecel", "es teh", "kopi"};
    string ulang;

    int harga[5] = {15000, 20000, 10000, 3000, 5000};
    int t;
    int pos[5];
    int total[5];
    int all;

    do {
        // Menampilkan daftar menu
        for (t = 0; t < 1; t++) {
            cout << "-------- MENU MAKANAN --------" << endl;
            cout << "1. " << menu[0] << endl;
            cout << "2. " << menu[1] << endl;
            cout << "3. " << menu[2] << endl;

            cout << "-------- MENU MINUMAN --------" << endl;
            cout << "4. " << menu[3] << endl;
            cout << "5. " << menu[4] << endl;
            cout << endl;
        }

        // Pesanan menu pertama
        cout << "Menu : ";
        cin >> menu[0];
        cout << "Harga : ";
        cin >> harga[0];
        cout << "Masukkan Porsi : ";
        cin >> pos[0];

        total[0] = harga[0] * pos[0];

        cout << "Totalnya : ";
        cout << total[0] << endl;

        // Pesanan menu kedua
        cout << "Menu : ";
        cin >> menu[1];
        cout << "Harga : ";
        cin >> harga[1];
        cout << "Masukkan Porsi : ";
        cin >> pos[1];

        total[1] = harga[1] * pos[1];

        cout << "Totalnya : ";
        cout << total[1] << endl;

        // Pesanan menu ketiga
        cout << "Menu : ";
        cin >> menu[2];
        cout << "Harga : ";
        cin >> harga[2];
        cout << "Masukkan Porsi : ";
        cin >> pos[2];

        total[2] = harga[2] * pos[2];

        cout << "Totalnya : ";
        cout << total[2] << endl;

        // Pesanan menu keempat
        cout << "Menu : ";
        cin >> menu[3];
        cout << "Harga : ";
        cin >> harga[3];
        cout << "Masukkan Porsi : ";
        cin >> pos[3];

        total[3] = harga[3] * pos[3];

        cout << "Totalnya : ";
        cout << total[3] << endl;

        // Pesanan menu kelima
        cout << "Menu : ";
        cin >> menu[4];
        cout << "Harga : ";
        cin >> harga[4];
        cout << "Masukkan Porsi : ";
        cin >> pos[4];

        total[4] = harga[4] * pos[4];

        cout << "Totalnya : ";
        cout << total[4] << endl;

        // Menghitung total keseluruhan
        all = total[0] + total[1] + total[2]
            + total[3] + total[4];

        cout << "-------- DETAIL PESANAN --------" << endl;
        cout << "Total Keseluruhan : ";
        cout << all << endl;

        cout << endl;
        cout << "Apakah Anda Mau Pesan Lagi? Tekan b/B: ";
        cin >> ulang;

    } while (ulang == "b" || ulang == "B");

    system("pause");
    return 0;
}
