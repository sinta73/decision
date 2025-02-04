
/*buat program untuk menginputkan sebuah bilangan, kemudian cetak ke layar bilangan tersebut
dan beri komentar apakah bilangan tersebut ganjil atau genap*/
#include <iostream>
using namespace std;

int main(){
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka % 2 == 0){
        cout << "Bilangan genap";
    }
    else {
        cout << "Bilangan ganjil";
    }

    return 0;
}

