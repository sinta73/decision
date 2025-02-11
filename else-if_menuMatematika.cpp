
#include <iostream>
using namespace std;

int main(){
    int a, b;
    int pilihan;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << "----------=KALKULATOR SEDERHANA=----------" << endl;
    cout << "Menu Matematika:" << endl;
    cout << "1. Penjumlahan\n2. Pengurangan\n3. Pembagian\n4. Perkalian\n";

    cout << "Masukkan pilihan anda: ";
    cin >> pilihan;
    cout << "__________________________________________" << endl;

    if (pilihan == 1){
        cout << a << " + " << b << " hasilnya adalah " << a + b;
    } else if (pilihan == 2){
        cout << a << " - " << b << " hasilnya adalah " << a - b;
    } else if (pilihan == 3){
        cout << a << " : " << b << " hasilnya adalah " << a / b;
    } else if (pilihan == 4){
        cout << a << " X " << b << " hasilnya adalah " << a * b;
    } else{
        cout << "Pilihan tidak valid!";
    }
    return 0;
}