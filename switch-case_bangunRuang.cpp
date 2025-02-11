
#include <iostream>
using namespace std;

int main(){
    int bangunRuang, panjang, tinggi;
    
    cout << " -----=MENGHITUNG VOLUME BANGUN RUANG=-----" << endl;
    cout << "1. Volume Kubus\n2. Luas Lingkaran\n3. Volume Slinder" << endl;
    cout << "___________________________________________" << endl;
    
    cout << "\nMasukkan nama bangun ruang (1 - 3) : ";
    cin >> bangunRuang;

    switch (bangunRuang){
        case 1:
        cout << "Masukkan panjang sisi kubus: ";
        cin >> panjang;
        cout << "Volume kubus adalah " << panjang * panjang * panjang << endl;
        break;
        case 2:
        cout << "Masukkan panjang jari-jari lingkaran: ";
        cin >> panjang;
        cout << "Luas lingkaran adalah " << 3.14 * panjang * panjang << endl;
        break;
        case 3:
        cout << "Masukkan panjang jari-jari lingkaran: ";
        cin >> panjang;
        cout << "Masukkan tinggi silinder: ";
        cin >> tinggi;
        cout << "Volume silinder adalah: " << 3.14 * panjang * panjang * tinggi << endl;
        break;
        default:
        cout << "Terjadi kesalahan!" << endl;
    }
    return 0;
}