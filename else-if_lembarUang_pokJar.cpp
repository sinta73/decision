
#include <iostream>
using namespace std;

int main() {
    int jumlah_uang;
    
    cout << "Masukkan jumlah uang: ";
    cin >> jumlah_uang;
    
    if (jumlah_uang >= 100000) {
        cout << "100000 : " << jumlah_uang / 100000 << " lembar" << endl;
        jumlah_uang %= 100000;
    }
    if (jumlah_uang >= 50000) {
        cout << "50000 : " << jumlah_uang / 50000 << " lembar" << endl;
        jumlah_uang %= 50000;
    }
    if (jumlah_uang >= 20000) {
        cout << "20000 : " << jumlah_uang / 20000 << " lembar" << endl;
        jumlah_uang %= 20000;
    }
    if (jumlah_uang >= 10000) {
        cout << "10000 : " << jumlah_uang / 10000 << " lembar" << endl;
        jumlah_uang %= 10000;
    }
    if (jumlah_uang >= 5000) {
        cout << "5000 : " << jumlah_uang / 5000 << " lembar" << endl;
        jumlah_uang %= 5000;
    }
    if (jumlah_uang >= 2000) {
        cout << "2000 : " << jumlah_uang / 2000 << " lembar" << endl;
        jumlah_uang %= 2000;
    }
    if (jumlah_uang >= 1000) {
        cout << "1000 : " << jumlah_uang / 1000 << " lembar" << endl;
        jumlah_uang %= 1000;
    }
    
    return 0;
}