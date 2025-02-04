
#include <iostream>
using namespace std;

int main() {
    float total_pembelian, discount = 0;

    // Meminta input dari pengguna
    cout << "Masukkan total pembelian: ";
    cin >> total_pembelian;

    // Mengecek apakah mendapat diskon
    if (total_pembelian >= 100000) {
        discount = 0.05 * total_pembelian;
    }

    // Menampilkan hasil diskon
    cout << "Besarnya discount = " << discount << endl;
    cout << "Total Pembayaran: Rp. " << total_pembelian - discount << endl;

    return 0;
}
